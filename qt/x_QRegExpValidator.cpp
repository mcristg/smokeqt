//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qvalidator.h>
#include <qregexp.h>

class x_QRegExpValidator : public QRegExpValidator {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QRegExpValidator::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QRegExpValidator::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QRegExpValidator::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QRegExpValidator::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QRegExpValidator::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QRegExpValidator::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QRegExpValidator::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QRegExpValidator(QObject*, const char*)
	x_QRegExpValidator* xret = new x_QRegExpValidator((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QRegExpValidator(QObject* x1, const char* x2) : QRegExpValidator(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QRegExpValidator(QObject*)
	x_QRegExpValidator* xret = new x_QRegExpValidator((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegExpValidator(QObject* x1) : QRegExpValidator(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QRegExpValidator(const QRegExp&, QObject*, const char*)
	x_QRegExpValidator* xret = new x_QRegExpValidator(*(const QRegExp *)x[1].s_class,(QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QRegExpValidator(const QRegExp& x1, QObject* x2, const char* x3) : QRegExpValidator(x1, x2, x3) {
    }
    static void x_10(Smoke::Stack x) {
	// QRegExpValidator(const QRegExp&, QObject*)
	x_QRegExpValidator* xret = new x_QRegExpValidator(*(const QRegExp *)x[1].s_class,(QObject*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegExpValidator(const QRegExp& x1, QObject* x2) : QRegExpValidator(x1, x2) {
    }
    void x_11(Smoke::Stack x) const {
	// validate(QString&, int&)
	QValidator::State xret = this->QRegExpValidator::validate(*(QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_enum = xret;
    }
    void x_12(Smoke::Stack x) {
	// setRegExp(const QRegExp&)
	this->QRegExpValidator::setRegExp(*(const QRegExp *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) const {
	// regExp()
	const QRegExp& xret = this->QRegExpValidator::regExp();
	x[0].s_class = (void*)&xret;
    }
    static void x_14(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QRegExpValidator::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_15(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QRegExpValidator::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_16(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QRegExpValidator::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_17(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QRegExpValidator::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_18(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QRegExpValidator::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
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
	if(qt_Smoke->binding->callMethod(7857, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QRegExpValidator::className();
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
    virtual void fixup(QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11454, (void*)this, x)) return;
	this->QValidator::fixup(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6664, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7856, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QRegExpValidator::metaObject();
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
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(7858, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QRegExpValidator::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(7860, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QRegExpValidator::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(7859, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QRegExpValidator::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(7861, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QRegExpValidator::qt_property(x1, x2, x3);
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
    virtual QValidator::State validate(QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(7868, (void*)this, x)) {
	    QValidator::State *xptr = (QValidator::State *)x[0].s_class;
	    QValidator::State xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QRegExpValidator::validate(x1, x2);
    }
    ~x_QRegExpValidator() { qt_Smoke->binding->deleted(249, (void*)this); }
};
void xcall_QRegExpValidator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QRegExpValidator *xself = (x_QRegExpValidator*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QRegExpValidator::x_7(args);	break;
	case 8: x_QRegExpValidator::x_8(args);	break;
	case 9: x_QRegExpValidator::x_9(args);	break;
	case 10: x_QRegExpValidator::x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: x_QRegExpValidator::x_14(args);	break;
	case 15: x_QRegExpValidator::x_15(args);	break;
	case 16: x_QRegExpValidator::x_16(args);	break;
	case 17: x_QRegExpValidator::x_17(args);	break;
	case 18: x_QRegExpValidator::x_18(args);	break;
	case 19: delete (QRegExpValidator*)xself;	break;
    }
}
