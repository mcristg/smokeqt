//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qtextstream.h>
#include <qstring.h>
#include <qdom.h>

class x_QDomNode : public QDomNode {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::ElementNode;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::AttributeNode;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::TextNode;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::CDATASectionNode;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::EntityReferenceNode;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::EntityNode;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::ProcessingInstructionNode;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::CommentNode;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::DocumentNode;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::DocumentTypeNode;
    }
    static void x_10(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::DocumentFragmentNode;
    }
    static void x_11(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::NotationNode;
    }
    static void x_12(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::BaseNode;
    }
    static void x_13(Smoke::Stack x) {
	x[0].s_enum = (long)QDomNode::CharacterDataNode;
    }
    static void x_14(Smoke::Stack x) {
	// QDomNode()
	x_QDomNode* xret = new x_QDomNode();
	x[0].s_class = (void*)xret;
    }
    x_QDomNode() : QDomNode() {
    }
    static void x_15(Smoke::Stack x) {
	// QDomNode(const QDomNode&)
	x_QDomNode* xret = new x_QDomNode(*(const QDomNode *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDomNode(const QDomNode& x1) : QDomNode(x1) {
    }
    void x_16(Smoke::Stack x) {
	// operator=(const QDomNode&)
	QDomNode& xret = this->QDomNode::operator=(*(const QDomNode *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_17(Smoke::Stack x) const {
	// operator==(const QDomNode&)
	bool xret = this->QDomNode::operator==(*(const QDomNode *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_18(Smoke::Stack x) const {
	// operator!=(const QDomNode&)
	bool xret = this->QDomNode::operator!=(*(const QDomNode *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_19(Smoke::Stack x) {
	// insertBefore(const QDomNode&, const QDomNode&)
	QDomNode xret = this->QDomNode::insertBefore(*(const QDomNode *)x[1].s_class,*(const QDomNode *)x[2].s_class);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_20(Smoke::Stack x) {
	// insertAfter(const QDomNode&, const QDomNode&)
	QDomNode xret = this->QDomNode::insertAfter(*(const QDomNode *)x[1].s_class,*(const QDomNode *)x[2].s_class);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_21(Smoke::Stack x) {
	// replaceChild(const QDomNode&, const QDomNode&)
	QDomNode xret = this->QDomNode::replaceChild(*(const QDomNode *)x[1].s_class,*(const QDomNode *)x[2].s_class);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_22(Smoke::Stack x) {
	// removeChild(const QDomNode&)
	QDomNode xret = this->QDomNode::removeChild(*(const QDomNode *)x[1].s_class);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_23(Smoke::Stack x) {
	// appendChild(const QDomNode&)
	QDomNode xret = this->QDomNode::appendChild(*(const QDomNode *)x[1].s_class);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_24(Smoke::Stack x) const {
	// hasChildNodes()
	bool xret = this->QDomNode::hasChildNodes();
	x[0].s_bool = xret;
    }
    void x_25(Smoke::Stack x) const {
	// cloneNode(bool)
	QDomNode xret = this->QDomNode::cloneNode((bool)x[1].s_bool);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_26(Smoke::Stack x) const {
	// cloneNode()
	QDomNode xret = this->QDomNode::cloneNode();
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_27(Smoke::Stack x) {
	// normalize()
	this->QDomNode::normalize();
	(void)x; // noop (for compiler warning)
    }
    void x_28(Smoke::Stack x) const {
	// isSupported(const QString&, const QString&)
	bool xret = this->QDomNode::isSupported(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_29(Smoke::Stack x) const {
	// nodeName()
	QString xret = this->QDomNode::nodeName();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_30(Smoke::Stack x) const {
	// nodeType()
	QDomNode::NodeType xret = this->QDomNode::nodeType();
	x[0].s_enum = xret;
    }
    void x_31(Smoke::Stack x) const {
	// parentNode()
	QDomNode xret = this->QDomNode::parentNode();
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_32(Smoke::Stack x) const {
	// childNodes()
	QDomNodeList xret = this->QDomNode::childNodes();
	x[0].s_class = (void*)new QDomNodeList(xret);
    }
    void x_33(Smoke::Stack x) const {
	// firstChild()
	QDomNode xret = this->QDomNode::firstChild();
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_34(Smoke::Stack x) const {
	// lastChild()
	QDomNode xret = this->QDomNode::lastChild();
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_35(Smoke::Stack x) const {
	// previousSibling()
	QDomNode xret = this->QDomNode::previousSibling();
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_36(Smoke::Stack x) const {
	// nextSibling()
	QDomNode xret = this->QDomNode::nextSibling();
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_37(Smoke::Stack x) const {
	// attributes()
	QDomNamedNodeMap xret = this->QDomNode::attributes();
	x[0].s_class = (void*)new QDomNamedNodeMap(xret);
    }
    void x_38(Smoke::Stack x) const {
	// ownerDocument()
	QDomDocument xret = this->QDomNode::ownerDocument();
	x[0].s_class = (void*)new QDomDocument(xret);
    }
    void x_39(Smoke::Stack x) const {
	// namespaceURI()
	QString xret = this->QDomNode::namespaceURI();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_40(Smoke::Stack x) const {
	// localName()
	QString xret = this->QDomNode::localName();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_41(Smoke::Stack x) const {
	// hasAttributes()
	bool xret = this->QDomNode::hasAttributes();
	x[0].s_bool = xret;
    }
    void x_42(Smoke::Stack x) const {
	// nodeValue()
	QString xret = this->QDomNode::nodeValue();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_43(Smoke::Stack x) {
	// setNodeValue(const QString&)
	this->QDomNode::setNodeValue(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_44(Smoke::Stack x) const {
	// prefix()
	QString xret = this->QDomNode::prefix();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_45(Smoke::Stack x) {
	// setPrefix(const QString&)
	this->QDomNode::setPrefix(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_46(Smoke::Stack x) const {
	// isAttr()
	bool xret = this->QDomNode::isAttr();
	x[0].s_bool = xret;
    }
    void x_47(Smoke::Stack x) const {
	// isCDATASection()
	bool xret = this->QDomNode::isCDATASection();
	x[0].s_bool = xret;
    }
    void x_48(Smoke::Stack x) const {
	// isDocumentFragment()
	bool xret = this->QDomNode::isDocumentFragment();
	x[0].s_bool = xret;
    }
    void x_49(Smoke::Stack x) const {
	// isDocument()
	bool xret = this->QDomNode::isDocument();
	x[0].s_bool = xret;
    }
    void x_50(Smoke::Stack x) const {
	// isDocumentType()
	bool xret = this->QDomNode::isDocumentType();
	x[0].s_bool = xret;
    }
    void x_51(Smoke::Stack x) const {
	// isElement()
	bool xret = this->QDomNode::isElement();
	x[0].s_bool = xret;
    }
    void x_52(Smoke::Stack x) const {
	// isEntityReference()
	bool xret = this->QDomNode::isEntityReference();
	x[0].s_bool = xret;
    }
    void x_53(Smoke::Stack x) const {
	// isText()
	bool xret = this->QDomNode::isText();
	x[0].s_bool = xret;
    }
    void x_54(Smoke::Stack x) const {
	// isEntity()
	bool xret = this->QDomNode::isEntity();
	x[0].s_bool = xret;
    }
    void x_55(Smoke::Stack x) const {
	// isNotation()
	bool xret = this->QDomNode::isNotation();
	x[0].s_bool = xret;
    }
    void x_56(Smoke::Stack x) const {
	// isProcessingInstruction()
	bool xret = this->QDomNode::isProcessingInstruction();
	x[0].s_bool = xret;
    }
    void x_57(Smoke::Stack x) const {
	// isCharacterData()
	bool xret = this->QDomNode::isCharacterData();
	x[0].s_bool = xret;
    }
    void x_58(Smoke::Stack x) const {
	// isComment()
	bool xret = this->QDomNode::isComment();
	x[0].s_bool = xret;
    }
    void x_59(Smoke::Stack x) const {
	// namedItem(const QString&)
	QDomNode xret = this->QDomNode::namedItem(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_60(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QDomNode::isNull();
	x[0].s_bool = xret;
    }
    void x_61(Smoke::Stack x) {
	// clear()
	this->QDomNode::clear();
	(void)x; // noop (for compiler warning)
    }
    void x_62(Smoke::Stack x) {
	// toAttr()
	QDomAttr xret = this->QDomNode::toAttr();
	x[0].s_class = (void*)new QDomAttr(xret);
    }
    void x_63(Smoke::Stack x) {
	// toCDATASection()
	QDomCDATASection xret = this->QDomNode::toCDATASection();
	x[0].s_class = (void*)new QDomCDATASection(xret);
    }
    void x_64(Smoke::Stack x) {
	// toDocumentFragment()
	QDomDocumentFragment xret = this->QDomNode::toDocumentFragment();
	x[0].s_class = (void*)new QDomDocumentFragment(xret);
    }
    void x_65(Smoke::Stack x) {
	// toDocument()
	QDomDocument xret = this->QDomNode::toDocument();
	x[0].s_class = (void*)new QDomDocument(xret);
    }
    void x_66(Smoke::Stack x) {
	// toDocumentType()
	QDomDocumentType xret = this->QDomNode::toDocumentType();
	x[0].s_class = (void*)new QDomDocumentType(xret);
    }
    void x_67(Smoke::Stack x) {
	// toElement()
	QDomElement xret = this->QDomNode::toElement();
	x[0].s_class = (void*)new QDomElement(xret);
    }
    void x_68(Smoke::Stack x) {
	// toEntityReference()
	QDomEntityReference xret = this->QDomNode::toEntityReference();
	x[0].s_class = (void*)new QDomEntityReference(xret);
    }
    void x_69(Smoke::Stack x) {
	// toText()
	QDomText xret = this->QDomNode::toText();
	x[0].s_class = (void*)new QDomText(xret);
    }
    void x_70(Smoke::Stack x) {
	// toEntity()
	QDomEntity xret = this->QDomNode::toEntity();
	x[0].s_class = (void*)new QDomEntity(xret);
    }
    void x_71(Smoke::Stack x) {
	// toNotation()
	QDomNotation xret = this->QDomNode::toNotation();
	x[0].s_class = (void*)new QDomNotation(xret);
    }
    void x_72(Smoke::Stack x) {
	// toProcessingInstruction()
	QDomProcessingInstruction xret = this->QDomNode::toProcessingInstruction();
	x[0].s_class = (void*)new QDomProcessingInstruction(xret);
    }
    void x_73(Smoke::Stack x) {
	// toCharacterData()
	QDomCharacterData xret = this->QDomNode::toCharacterData();
	x[0].s_class = (void*)new QDomCharacterData(xret);
    }
    void x_74(Smoke::Stack x) {
	// toComment()
	QDomComment xret = this->QDomNode::toComment();
	x[0].s_class = (void*)new QDomComment(xret);
    }
    void x_75(Smoke::Stack x) const {
	// save(QTextStream&, int)
	this->QDomNode::save(*(QTextStream *)x[1].s_class,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_76(Smoke::Stack x) {
	// QDomNode(QDomNodePrivate*)
	x_QDomNode* xret = new x_QDomNode((QDomNodePrivate*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QDomNode(QDomNodePrivate* x1) : QDomNode(x1) {
    }
    virtual QDomNode appendChild(const QDomNode& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2624, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::appendChild(x1);
    }
    virtual QDomNamedNodeMap attributes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2638, (void*)this, x)) {
	    QDomNamedNodeMap *xptr = (QDomNamedNodeMap *)x[0].s_class;
	    QDomNamedNodeMap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::attributes();
    }
    virtual QDomNodeList childNodes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2633, (void*)this, x)) {
	    QDomNodeList *xptr = (QDomNodeList *)x[0].s_class;
	    QDomNodeList xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::childNodes();
    }
    virtual QDomNode cloneNode(bool x1) const {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(2626, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::cloneNode(x1);
    }
    virtual QDomNode firstChild() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2634, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::firstChild();
    }
    virtual bool hasAttributes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2642, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::hasAttributes();
    }
    virtual bool hasChildNodes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2625, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::hasChildNodes();
    }
    virtual QDomNode insertAfter(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2621, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::insertAfter(x1, x2);
    }
    virtual QDomNode insertBefore(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2620, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::insertBefore(x1, x2);
    }
    virtual bool isAttr() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2647, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isAttr();
    }
    virtual bool isCDATASection() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2648, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isCDATASection();
    }
    virtual bool isCharacterData() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2658, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isCharacterData();
    }
    virtual bool isComment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2659, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isComment();
    }
    virtual bool isDocument() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2650, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isDocument();
    }
    virtual bool isDocumentFragment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2649, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isDocumentFragment();
    }
    virtual bool isDocumentType() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2651, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isDocumentType();
    }
    virtual bool isElement() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2652, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isElement();
    }
    virtual bool isEntity() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2655, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isEntity();
    }
    virtual bool isEntityReference() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2653, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isEntityReference();
    }
    virtual bool isNotation() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2656, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isNotation();
    }
    virtual bool isProcessingInstruction() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2657, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isProcessingInstruction();
    }
    virtual bool isSupported(const QString& x1, const QString& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2629, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isSupported(x1, x2);
    }
    virtual bool isText() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2654, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isText();
    }
    virtual QDomNode lastChild() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2635, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::lastChild();
    }
    virtual QString localName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2641, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::localName();
    }
    virtual QString namespaceURI() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2640, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::namespaceURI();
    }
    virtual QDomNode nextSibling() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2637, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nextSibling();
    }
    virtual QString nodeName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2630, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nodeName();
    }
    virtual QDomNode::NodeType nodeType() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2631, (void*)this, x)) {
	    QDomNode::NodeType *xptr = (QDomNode::NodeType *)x[0].s_class;
	    QDomNode::NodeType xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nodeType();
    }
    virtual QString nodeValue() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2643, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nodeValue();
    }
    virtual void normalize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2628, (void*)this, x)) return;
	this->QDomNode::normalize();
    }
    virtual QDomDocument ownerDocument() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2639, (void*)this, x)) {
	    QDomDocument *xptr = (QDomDocument *)x[0].s_class;
	    QDomDocument xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::ownerDocument();
    }
    virtual QDomNode parentNode() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2632, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::parentNode();
    }
    virtual QString prefix() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2645, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::prefix();
    }
    virtual QDomNode previousSibling() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2636, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::previousSibling();
    }
    virtual QDomNode removeChild(const QDomNode& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2623, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::removeChild(x1);
    }
    virtual QDomNode replaceChild(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2622, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::replaceChild(x1, x2);
    }
    virtual void setNodeValue(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2644, (void*)this, x)) return;
	this->QDomNode::setNodeValue(x1);
    }
    virtual void setPrefix(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2646, (void*)this, x)) return;
	this->QDomNode::setPrefix(x1);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 176: //QDomNode::NodeType
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QDomNode::NodeType;
		break;
	      case Smoke::EnumDelete:
		delete (QDomNode::NodeType*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QDomNode::NodeType*)xdata = (QDomNode::NodeType)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QDomNode::NodeType*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QDomNode() { qt_Smoke->binding->deleted(88, (void*)this); }
};
void xenum_QDomNode(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QDomNode::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QDomNode(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDomNode *xself = (x_QDomNode*)obj;
    switch(xi) {
	case 0: x_QDomNode::x_0(args);	break;
	case 1: x_QDomNode::x_1(args);	break;
	case 2: x_QDomNode::x_2(args);	break;
	case 3: x_QDomNode::x_3(args);	break;
	case 4: x_QDomNode::x_4(args);	break;
	case 5: x_QDomNode::x_5(args);	break;
	case 6: x_QDomNode::x_6(args);	break;
	case 7: x_QDomNode::x_7(args);	break;
	case 8: x_QDomNode::x_8(args);	break;
	case 9: x_QDomNode::x_9(args);	break;
	case 10: x_QDomNode::x_10(args);	break;
	case 11: x_QDomNode::x_11(args);	break;
	case 12: x_QDomNode::x_12(args);	break;
	case 13: x_QDomNode::x_13(args);	break;
	case 14: x_QDomNode::x_14(args);	break;
	case 15: x_QDomNode::x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: xself->x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: xself->x_65(args);	break;
	case 66: xself->x_66(args);	break;
	case 67: xself->x_67(args);	break;
	case 68: xself->x_68(args);	break;
	case 69: xself->x_69(args);	break;
	case 70: xself->x_70(args);	break;
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: xself->x_74(args);	break;
	case 75: xself->x_75(args);	break;
	case 76: x_QDomNode::x_76(args);	break;
	case 77: delete (QDomNode*)xself;	break;
    }
}
