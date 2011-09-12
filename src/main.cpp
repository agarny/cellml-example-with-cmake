#include "cellml-api-cxx-support.hpp"
#include "IfaceCellML_APISPEC.hxx"
#include "CellMLBootstrap.hpp"

#include <stdio.h>
#include <string>

int main(int argc, char ** argv)
{
    RETURN_INTO_OBJREF(cbs, iface::cellml_api::CellMLBootstrap,
                       CreateCellMLBootstrap());

    RETURN_INTO_OBJREF(ml, iface::cellml_api::DOMModelLoader,
                       cbs->modelLoader());

    try {
        RETURN_INTO_OBJREF(model, iface::cellml_api::Model,
                           ml->loadFromURL(L"http://www.cellml.org/models/beeler_reuter_1977_version04/download"));

        RETURN_INTO_WSTRING(cmid, model->cmetaId());

        printf("Model's cmeta:id is %S\n", cmid.c_str());
    } catch (iface::cellml_api::CellMLException& e) {
        RETURN_INTO_WSTRING(msg, ml->lastErrorMessage());

        printf("Got a CellML Exception loading a model. Error was %S\n",
               msg.c_str());

        return 1;
    }

    return 0;
}