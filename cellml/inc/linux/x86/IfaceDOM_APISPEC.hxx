/* This file is automatically generated from DOM_APISPEC.idl
 * DO NOT EDIT DIRECTLY OR CHANGES WILL BE LOST!
 */
#ifndef _GUARD_IFACE_DOMAPISPEC
#define _GUARD_IFACE_DOMAPISPEC
#include "cda_compiler_support.h"
#ifdef MODULE_CONTAINS_DOMAPISPEC
#define PUBLIC_DOMAPISPEC_PRE CDA_EXPORT_PRE
#define PUBLIC_DOMAPISPEC_POST CDA_EXPORT_POST
#else
#define PUBLIC_DOMAPISPEC_PRE CDA_IMPORT_PRE
#define PUBLIC_DOMAPISPEC_POST CDA_IMPORT_POST
#endif
#include "Ifacexpcom.hxx"
namespace iface
{
  namespace dom
  {
    typedef wchar_t* DOMString;
    typedef uint64_t DOMTimeStamp;
    class DocumentType;
    class Document;
    class NodeList;
    class NamedNodeMap;
    class Element;
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST DOMException : public std::exception
    {
    public:
      DOMException(){}
    };
    static const uint16_t INDEX_SIZE_ERR = 1;
    static const uint16_t DOMSTRING_SIZE_ERR = 2;
    static const uint16_t HIERARCHY_REQUEST_ERR = 3;
    static const uint16_t WRONG_DOCUMENT_ERR = 4;
    static const uint16_t INVALID_CHARACTER_ERR = 5;
    static const uint16_t NO_DATA_ALLOWED_ERR = 6;
    static const uint16_t NO_MODIFICATION_ALLOWED_ERR = 7;
    static const uint16_t NOT_FOUND_ERR = 8;
    static const uint16_t NOT_SUPPORTED_ERR = 9;
    static const uint16_t INUSE_ATTRIBUTE_ERR = 10;
    static const uint16_t INVALID_STATE_ERR = 11;
    static const uint16_t SYNTAX_ERR = 12;
    static const uint16_t INVALID_MODIFICATION_ERR = 13;
    static const uint16_t NAMESPACE_ERR = 14;
    static const uint16_t INVALID_ACCESS_ERR = 15;
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST DOMImplementation
     : public virtual iface::XPCOM::IObject
    {
    public:
      virtual ~DOMImplementation() {}
      virtual bool hasFeature(const wchar_t* feature, const wchar_t* version) throw(std::exception&) = 0;
      virtual iface::dom::DocumentType* createDocumentType(const wchar_t* qualifiedName, const wchar_t* publicId, const wchar_t* systemId) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Document* createDocument(const wchar_t* namespaceURI, const wchar_t* qualifiedName, iface::dom::DocumentType* doctype) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Node
     : public virtual iface::XPCOM::IObject
    {
    public:
      virtual ~Node() {}
      static const uint16_t ELEMENT_NODE = 1;
      static const uint16_t ATTRIBUTE_NODE = 2;
      static const uint16_t TEXT_NODE = 3;
      static const uint16_t CDATA_SECTION_NODE = 4;
      static const uint16_t ENTITY_REFERENCE_NODE = 5;
      static const uint16_t ENTITY_NODE = 6;
      static const uint16_t PROCESSING_INSTRUCTION_NODE = 7;
      static const uint16_t COMMENT_NODE = 8;
      static const uint16_t DOCUMENT_NODE = 9;
      static const uint16_t DOCUMENT_TYPE_NODE = 10;
      static const uint16_t DOCUMENT_FRAGMENT_NODE = 11;
      static const uint16_t NOTATION_NODE = 12;
      virtual wchar_t* nodeName() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* nodeValue() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void nodeValue(const wchar_t* attr) throw(std::exception&) = 0;
      virtual uint16_t nodeType() throw(std::exception&)  = 0;
      virtual iface::dom::Node* parentNode() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::NodeList* childNodes() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* firstChild() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* lastChild() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* previousSibling() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* nextSibling() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::NamedNodeMap* attributes() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Document* ownerDocument() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* insertBefore(iface::dom::Node* newChild, iface::dom::Node* refChild) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* replaceChild(iface::dom::Node* newChild, iface::dom::Node* oldChild) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* removeChild(iface::dom::Node* oldChild) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* appendChild(iface::dom::Node* newChild) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual bool hasChildNodes() throw(std::exception&) = 0;
      virtual iface::dom::Node* cloneNode(bool deep) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual void normalize() throw(std::exception&) = 0;
      virtual bool isSupported(const wchar_t* feature, const wchar_t* version) throw(std::exception&) = 0;
      virtual wchar_t* namespaceURI() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* prefix() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void prefix(const wchar_t* attr) throw(std::exception&) = 0;
      virtual wchar_t* localName() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual bool hasAttributes() throw(std::exception&) = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST NodeList
     : public virtual iface::XPCOM::IObject
    {
    public:
      virtual ~NodeList() {}
      virtual iface::dom::Node* item(uint32_t index) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual uint32_t length() throw(std::exception&)  = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST NamedNodeMap
     : public virtual iface::XPCOM::IObject
    {
    public:
      virtual ~NamedNodeMap() {}
      virtual iface::dom::Node* getNamedItem(const wchar_t* name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* setNamedItem(iface::dom::Node* arg) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* removeNamedItem(const wchar_t* name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* item(uint32_t index) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual uint32_t length() throw(std::exception&)  = 0;
      virtual iface::dom::Node* getNamedItemNS(const wchar_t* namespaceURI, const wchar_t* localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* setNamedItemNS(iface::dom::Node* arg) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* removeNamedItemNS(const wchar_t* namespaceURI, const wchar_t* localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST CharacterData
     : public virtual iface::dom::Node
    {
    public:
      virtual ~CharacterData() {}
      virtual wchar_t* data() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void data(const wchar_t* attr) throw(std::exception&) = 0;
      virtual uint32_t length() throw(std::exception&)  = 0;
      virtual wchar_t* substringData(uint32_t offset, uint32_t count) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual void appendData(const wchar_t* arg) throw(std::exception&) = 0;
      virtual void insertData(uint32_t offset, const wchar_t* arg) throw(std::exception&) = 0;
      virtual void deleteData(uint32_t offset, uint32_t count) throw(std::exception&) = 0;
      virtual void replaceData(uint32_t offset, uint32_t count, const wchar_t* arg) throw(std::exception&) = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Attr
     : public virtual iface::dom::Node
    {
    public:
      virtual ~Attr() {}
      virtual wchar_t* name() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual bool specified() throw(std::exception&)  = 0;
      virtual wchar_t* value() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void value(const wchar_t* attr) throw(std::exception&) = 0;
      virtual iface::dom::Element* ownerElement() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Element
     : public virtual iface::dom::Node
    {
    public:
      virtual ~Element() {}
      virtual wchar_t* tagName() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* getAttribute(const wchar_t* name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual void setAttribute(const wchar_t* name, const wchar_t* value) throw(std::exception&) = 0;
      virtual void removeAttribute(const wchar_t* name) throw(std::exception&) = 0;
      virtual iface::dom::Attr* getAttributeNode(const wchar_t* name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Attr* setAttributeNode(iface::dom::Attr* newAttr) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Attr* removeAttributeNode(iface::dom::Attr* oldAttr) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::NodeList* getElementsByTagName(const wchar_t* name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* getAttributeNS(const wchar_t* namespaceURI, const wchar_t* localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual void setAttributeNS(const wchar_t* namespaceURI, const wchar_t* qualifiedName, const wchar_t* value) throw(std::exception&) = 0;
      virtual void removeAttributeNS(const wchar_t* namespaceURI, const wchar_t* localName) throw(std::exception&) = 0;
      virtual iface::dom::Attr* getAttributeNodeNS(const wchar_t* namespaceURI, const wchar_t* localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Attr* setAttributeNodeNS(iface::dom::Attr* newAttr) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::NodeList* getElementsByTagNameNS(const wchar_t* namespaceURI, const wchar_t* localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual bool hasAttribute(const wchar_t* name) throw(std::exception&) = 0;
      virtual bool hasAttributeNS(const wchar_t* namespaceURI, const wchar_t* localName) throw(std::exception&) = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Text
     : public virtual iface::dom::CharacterData
    {
    public:
      virtual ~Text() {}
      virtual iface::dom::Text* splitText(uint32_t offset) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Comment
     : public virtual iface::dom::CharacterData
    {
    public:
      virtual ~Comment() {}
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST CDATASection
     : public virtual iface::dom::Text
    {
    public:
      virtual ~CDATASection() {}
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST DocumentType
     : public virtual iface::dom::Node
    {
    public:
      virtual ~DocumentType() {}
      virtual wchar_t* name() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::NamedNodeMap* entities() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::NamedNodeMap* notations() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* publicId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* systemId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* internalSubset() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Notation
     : public virtual iface::dom::Node
    {
    public:
      virtual ~Notation() {}
      virtual wchar_t* publicId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* systemId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Entity
     : public virtual iface::dom::Node
    {
    public:
      virtual ~Entity() {}
      virtual wchar_t* publicId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* systemId() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* notationName() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST EntityReference
     : public virtual iface::dom::Node
    {
    public:
      virtual ~EntityReference() {}
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST ProcessingInstruction
     : public virtual iface::dom::Node
    {
    public:
      virtual ~ProcessingInstruction() {}
      virtual wchar_t* target() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual wchar_t* data() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual void data(const wchar_t* attr) throw(std::exception&) = 0;
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST DocumentFragment
     : public virtual iface::dom::Node
    {
    public:
      virtual ~DocumentFragment() {}
    };
    PUBLIC_DOMAPISPEC_PRE 
    class  PUBLIC_DOMAPISPEC_POST Document
     : public virtual iface::dom::Node
    {
    public:
      virtual ~Document() {}
      virtual iface::dom::DocumentType* doctype() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::DOMImplementation* implementation() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Element* documentElement() throw(std::exception&)  WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Element* createElement(const wchar_t* tagName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::DocumentFragment* createDocumentFragment() throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Text* createTextNode(const wchar_t* data) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Comment* createComment(const wchar_t* data) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::CDATASection* createCDATASection(const wchar_t* data) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::ProcessingInstruction* createProcessingInstruction(const wchar_t* target, const wchar_t* data) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Attr* createAttribute(const wchar_t* name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::EntityReference* createEntityReference(const wchar_t* name) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::NodeList* getElementsByTagName(const wchar_t* tagname) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Node* importNode(iface::dom::Node* importedNode, bool deep) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Element* createElementNS(const wchar_t* namespaceURI, const wchar_t* qualifiedName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Attr* createAttributeNS(const wchar_t* namespaceURI, const wchar_t* qualifiedName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::NodeList* getElementsByTagNameNS(const wchar_t* namespaceURI, const wchar_t* localName) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
      virtual iface::dom::Element* getElementById(const wchar_t* elementId) throw(std::exception&) WARN_IF_RETURN_UNUSED = 0;
    };
  };
};
#undef PUBLIC_DOMAPISPEC_PRE
#undef PUBLIC_DOMAPISPEC_POST
#endif // guard
