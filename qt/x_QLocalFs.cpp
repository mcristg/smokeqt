//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qlocalfs.h>
#include <qstring.h>

class x_QLocalFs : public QLocalFs {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QLocalFs::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QLocalFs::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QLocalFs::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QLocalFs::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QLocalFs::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QLocalFs::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QLocalFs::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QLocalFs()
	x_QLocalFs* xret = new x_QLocalFs();
	x[0].s_class = (void*)xret;
    }
    x_QLocalFs() : QLocalFs() {
    }
    void x_8(Smoke::Stack x) const {
	// supportedOperations()
	int xret = this->QLocalFs::supportedOperations();
	x[0].s_int = xret;
    }
    static void x_9(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QLocalFs::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_10(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QLocalFs::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_11(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QLocalFs::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_12(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QLocalFs::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_13(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QLocalFs::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_14(Smoke::Stack x) {
	// operationListChildren(QNetworkOperation*)
	this->QLocalFs::operationListChildren((QNetworkOperation*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_15(Smoke::Stack x) {
	// operationMkDir(QNetworkOperation*)
	this->QLocalFs::operationMkDir((QNetworkOperation*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) {
	// operationRemove(QNetworkOperation*)
	this->QLocalFs::operationRemove((QNetworkOperation*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) {
	// operationRename(QNetworkOperation*)
	this->QLocalFs::operationRename((QNetworkOperation*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) {
	// operationGet(QNetworkOperation*)
	this->QLocalFs::operationGet((QNetworkOperation*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) {
	// operationPut(QNetworkOperation*)
	this->QLocalFs::operationPut((QNetworkOperation*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    virtual void addOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6594, (void*)this, x)) return;
	this->QNetworkProtocol::addOperation(x1);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6711, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual bool checkConnection(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6625, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QNetworkProtocol::checkConnection(x1);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6707, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5860, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QLocalFs::className();
    }
    virtual void clearOperationQueue() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6597, (void*)this, x)) return;
	this->QNetworkProtocol::clearOperationQueue();
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
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6664, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5859, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QLocalFs::metaObject();
    }
    virtual void operationGet(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5878, (void*)this, x)) return;
	this->QLocalFs::operationGet(x1);
    }
    virtual void operationListChildren(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5874, (void*)this, x)) return;
	this->QLocalFs::operationListChildren(x1);
    }
    virtual void operationMkDir(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5875, (void*)this, x)) return;
	this->QLocalFs::operationMkDir(x1);
    }
    virtual void operationPut(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5879, (void*)this, x)) return;
	this->QLocalFs::operationPut(x1);
    }
    virtual void operationPutChunk(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6624, (void*)this, x)) return;
	this->QNetworkProtocol::operationPutChunk(x1);
    }
    virtual void operationRemove(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5876, (void*)this, x)) return;
	this->QLocalFs::operationRemove(x1);
    }
    virtual void operationRename(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5877, (void*)this, x)) return;
	this->QLocalFs::operationRename(x1);
    }
    virtual void processOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6617, (void*)this, x)) return;
	this->QNetworkProtocol::processOperation(x1);
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
	if(qt_Smoke->binding->callMethod(5861, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QLocalFs::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(5863, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLocalFs::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(5862, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLocalFs::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(5864, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLocalFs::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6665, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setAutoDelete(bool x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(6590, (void*)this, x)) return;
	this->QNetworkProtocol::setAutoDelete(x1, x2);
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
    virtual void setUrl(QUrlOperator* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6589, (void*)this, x)) return;
	this->QNetworkProtocol::setUrl(x1);
    }
    virtual void stop() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6598, (void*)this, x)) return;
	this->QNetworkProtocol::stop();
    }
    virtual int supportedOperations() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5867, (void*)this, x)) return (int)x[0].s_int;
	return this->QLocalFs::supportedOperations();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6706, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QLocalFs() { qt_Smoke->binding->deleted(193, (void*)this); }
};
void xcall_QLocalFs(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QLocalFs *xself = (x_QLocalFs*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QLocalFs::x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: x_QLocalFs::x_9(args);	break;
	case 10: x_QLocalFs::x_10(args);	break;
	case 11: x_QLocalFs::x_11(args);	break;
	case 12: x_QLocalFs::x_12(args);	break;
	case 13: x_QLocalFs::x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: delete (QLocalFs*)xself;	break;
    }
}
