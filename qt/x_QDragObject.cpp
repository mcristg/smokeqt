//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qpoint.h>
#include <qcstring.h>
#include <qstring.h>
#include <qdragobject.h>
#include <qpixmap.h>

class x_QDragObject : public QDragObject {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QDragObject::DragDefault;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QDragObject::DragCopy;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QDragObject::DragMove;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QDragObject::DragLink;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QDragObject::DragCopyOrMove;
    }
    void x_5(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QDragObject::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_6(Smoke::Stack x) const {
	// className()
	const char* xret = this->QDragObject::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_7(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QDragObject::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_8(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QDragObject::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QDragObject::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QDragObject::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QDragObject::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_12(Smoke::Stack x) {
	// QDragObject(QWidget*, const char*)
	x_QDragObject* xret = new x_QDragObject((QWidget*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QDragObject(QWidget* x1, const char* x2) : QDragObject(x1, x2) {
    }
    static void x_13(Smoke::Stack x) {
	// QDragObject(QWidget*)
	x_QDragObject* xret = new x_QDragObject((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDragObject(QWidget* x1) : QDragObject(x1) {
    }
    static void x_14(Smoke::Stack x) {
	// QDragObject()
	x_QDragObject* xret = new x_QDragObject();
	x[0].s_class = (void*)xret;
    }
    x_QDragObject() : QDragObject() {
    }
    void x_15(Smoke::Stack x) {
	// drag()
	bool xret = this->QDragObject::drag();
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) {
	// dragMove()
	bool xret = this->QDragObject::dragMove();
	x[0].s_bool = xret;
    }
    void x_17(Smoke::Stack x) {
	// dragCopy()
	this->QDragObject::dragCopy();
	(void)x; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) {
	// dragLink()
	this->QDragObject::dragLink();
	(void)x; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) {
	// setPixmap(QPixmap)
	this->QDragObject::setPixmap(*(QPixmap *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) {
	// setPixmap(QPixmap, const QPoint&)
	this->QDragObject::setPixmap(*(QPixmap *)x[1].s_class,*(const QPoint *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) const {
	// pixmap()
	QPixmap xret = this->QDragObject::pixmap();
	x[0].s_class = (void*)new QPixmap(xret);
    }
    void x_22(Smoke::Stack x) const {
	// pixmapHotSpot()
	QPoint xret = this->QDragObject::pixmapHotSpot();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_23(Smoke::Stack x) {
	// source()
	QWidget* xret = this->QDragObject::source();
	x[0].s_class = (void*)xret;
    }
    static void x_24(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QDragObject::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_25(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QDragObject::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_26(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QDragObject::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_27(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QDragObject::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_28(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QDragObject::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_29(Smoke::Stack x) {
	// target()
	QWidget* xret = QDragObject::target();
	x[0].s_class = (void*)xret;
    }
    static void x_30(Smoke::Stack x) {
	// setTarget(QWidget*)
	QDragObject::setTarget((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) {
	// drag(QDragObject::DragMode)
	bool xret = this->QDragObject::drag((QDragObject::DragMode)x[1].s_enum);
	x[0].s_bool = xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6711, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6707, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2771, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QDragObject::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6709, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6708, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6710, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool drag(QDragObject::DragMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(2797, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDragObject::drag(x1);
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	qt_Smoke->binding->callMethod(6364, (void*)this, x, true /*pure virtual*/);
	QByteArray *xptr = (QByteArray *)x[0].s_class;
	QByteArray xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6641, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6642, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	qt_Smoke->binding->callMethod(6361, (void*)this, x, true /*pure virtual*/);
	return (const char*)x[0].s_class;
	// ABSTRACT
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6664, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2770, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QDragObject::metaObject();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6678, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6363, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QMimeSource::provides(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(2772, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QDragObject::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(2774, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDragObject::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(2773, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDragObject::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(2775, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDragObject::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6665, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6647, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setPixmap(QPixmap x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2785, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1);
    }
    virtual void setPixmap(QPixmap x1, const QPoint& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2786, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1, x2);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6677, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6706, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 195: //QDragObject::DragMode
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QDragObject::DragMode;
		break;
	      case Smoke::EnumDelete:
		delete (QDragObject::DragMode*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QDragObject::DragMode*)xdata = (QDragObject::DragMode)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QDragObject::DragMode*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QDragObject() { qt_Smoke->binding->deleted(98, (void*)this); }
};
void xenum_QDragObject(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QDragObject::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QDragObject(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDragObject *xself = (x_QDragObject*)obj;
    switch(xi) {
	case 0: x_QDragObject::x_0(args);	break;
	case 1: x_QDragObject::x_1(args);	break;
	case 2: x_QDragObject::x_2(args);	break;
	case 3: x_QDragObject::x_3(args);	break;
	case 4: x_QDragObject::x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: x_QDragObject::x_12(args);	break;
	case 13: x_QDragObject::x_13(args);	break;
	case 14: x_QDragObject::x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: x_QDragObject::x_24(args);	break;
	case 25: x_QDragObject::x_25(args);	break;
	case 26: x_QDragObject::x_26(args);	break;
	case 27: x_QDragObject::x_27(args);	break;
	case 28: x_QDragObject::x_28(args);	break;
	case 29: x_QDragObject::x_29(args);	break;
	case 30: x_QDragObject::x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: delete (QDragObject*)xself;	break;
    }
}
