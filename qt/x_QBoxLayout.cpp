//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qsizepolicy.h>
#include <qlayout.h>
#include <qstring.h>
#include <qrect.h>
#include <qsize.h>

class x_QBoxLayout : public QBoxLayout {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QBoxLayout::LeftToRight;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QBoxLayout::RightToLeft;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QBoxLayout::TopToBottom;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QBoxLayout::BottomToTop;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QBoxLayout::Down;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QBoxLayout::Up;
    }
    void x_6(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QBoxLayout::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_7(Smoke::Stack x) const {
	// className()
	const char* xret = this->QBoxLayout::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_8(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QBoxLayout::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_9(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QBoxLayout::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QBoxLayout::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QBoxLayout::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_12(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QBoxLayout::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_13(Smoke::Stack x) {
	// QBoxLayout(QWidget*, QBoxLayout::Direction, int, int, const char*)
	x_QBoxLayout* xret = new x_QBoxLayout((QWidget*)x[1].s_class,(QBoxLayout::Direction)x[2].s_enum,(int)x[3].s_int,(int)x[4].s_int,(const char*)x[5].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QWidget* x1, QBoxLayout::Direction x2, int x3, int x4, const char* x5) : QBoxLayout(x1, x2, x3, x4, x5) {
    }
    static void x_14(Smoke::Stack x) {
	// QBoxLayout(QWidget*, QBoxLayout::Direction, int, int)
	x_QBoxLayout* xret = new x_QBoxLayout((QWidget*)x[1].s_class,(QBoxLayout::Direction)x[2].s_enum,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QWidget* x1, QBoxLayout::Direction x2, int x3, int x4) : QBoxLayout(x1, x2, x3, x4) {
    }
    static void x_15(Smoke::Stack x) {
	// QBoxLayout(QWidget*, QBoxLayout::Direction, int)
	x_QBoxLayout* xret = new x_QBoxLayout((QWidget*)x[1].s_class,(QBoxLayout::Direction)x[2].s_enum,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QWidget* x1, QBoxLayout::Direction x2, int x3) : QBoxLayout(x1, x2, x3) {
    }
    static void x_16(Smoke::Stack x) {
	// QBoxLayout(QWidget*, QBoxLayout::Direction)
	x_QBoxLayout* xret = new x_QBoxLayout((QWidget*)x[1].s_class,(QBoxLayout::Direction)x[2].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QWidget* x1, QBoxLayout::Direction x2) : QBoxLayout(x1, x2) {
    }
    static void x_17(Smoke::Stack x) {
	// QBoxLayout(QLayout*, QBoxLayout::Direction, int, const char*)
	x_QBoxLayout* xret = new x_QBoxLayout((QLayout*)x[1].s_class,(QBoxLayout::Direction)x[2].s_enum,(int)x[3].s_int,(const char*)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QLayout* x1, QBoxLayout::Direction x2, int x3, const char* x4) : QBoxLayout(x1, x2, x3, x4) {
    }
    static void x_18(Smoke::Stack x) {
	// QBoxLayout(QLayout*, QBoxLayout::Direction, int)
	x_QBoxLayout* xret = new x_QBoxLayout((QLayout*)x[1].s_class,(QBoxLayout::Direction)x[2].s_enum,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QLayout* x1, QBoxLayout::Direction x2, int x3) : QBoxLayout(x1, x2, x3) {
    }
    static void x_19(Smoke::Stack x) {
	// QBoxLayout(QLayout*, QBoxLayout::Direction)
	x_QBoxLayout* xret = new x_QBoxLayout((QLayout*)x[1].s_class,(QBoxLayout::Direction)x[2].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QLayout* x1, QBoxLayout::Direction x2) : QBoxLayout(x1, x2) {
    }
    static void x_20(Smoke::Stack x) {
	// QBoxLayout(QBoxLayout::Direction, int, const char*)
	x_QBoxLayout* xret = new x_QBoxLayout((QBoxLayout::Direction)x[1].s_enum,(int)x[2].s_int,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QBoxLayout::Direction x1, int x2, const char* x3) : QBoxLayout(x1, x2, x3) {
    }
    static void x_21(Smoke::Stack x) {
	// QBoxLayout(QBoxLayout::Direction, int)
	x_QBoxLayout* xret = new x_QBoxLayout((QBoxLayout::Direction)x[1].s_enum,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QBoxLayout::Direction x1, int x2) : QBoxLayout(x1, x2) {
    }
    static void x_22(Smoke::Stack x) {
	// QBoxLayout(QBoxLayout::Direction)
	x_QBoxLayout* xret = new x_QBoxLayout((QBoxLayout::Direction)x[1].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QBoxLayout(QBoxLayout::Direction x1) : QBoxLayout(x1) {
    }
    void x_23(Smoke::Stack x) {
	// addItem(QLayoutItem*)
	this->QBoxLayout::addItem((QLayoutItem*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) const {
	// direction()
	QBoxLayout::Direction xret = this->QBoxLayout::direction();
	x[0].s_enum = xret;
    }
    void x_25(Smoke::Stack x) {
	// setDirection(QBoxLayout::Direction)
	this->QBoxLayout::setDirection((QBoxLayout::Direction)x[1].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) {
	// addSpacing(int)
	this->QBoxLayout::addSpacing((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_27(Smoke::Stack x) {
	// addStretch(int)
	this->QBoxLayout::addStretch((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_28(Smoke::Stack x) {
	// addStretch()
	this->QBoxLayout::addStretch();
	(void)x; // noop (for compiler warning)
    }
    void x_29(Smoke::Stack x) {
	// addWidget(QWidget*, int, int)
	this->QBoxLayout::addWidget((QWidget*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) {
	// addWidget(QWidget*, int)
	this->QBoxLayout::addWidget((QWidget*)x[1].s_class,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) {
	// addWidget(QWidget*)
	this->QBoxLayout::addWidget((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_32(Smoke::Stack x) {
	// addLayout(QLayout*, int)
	this->QBoxLayout::addLayout((QLayout*)x[1].s_class,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_33(Smoke::Stack x) {
	// addLayout(QLayout*)
	this->QBoxLayout::addLayout((QLayout*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_34(Smoke::Stack x) {
	// addStrut(int)
	this->QBoxLayout::addStrut((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_35(Smoke::Stack x) {
	// insertSpacing(int, int)
	this->QBoxLayout::insertSpacing((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_36(Smoke::Stack x) {
	// insertStretch(int, int)
	this->QBoxLayout::insertStretch((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_37(Smoke::Stack x) {
	// insertStretch(int)
	this->QBoxLayout::insertStretch((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_38(Smoke::Stack x) {
	// insertWidget(int, QWidget*, int, int)
	this->QBoxLayout::insertWidget((int)x[1].s_int,(QWidget*)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_39(Smoke::Stack x) {
	// insertWidget(int, QWidget*, int)
	this->QBoxLayout::insertWidget((int)x[1].s_int,(QWidget*)x[2].s_class,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_40(Smoke::Stack x) {
	// insertWidget(int, QWidget*)
	this->QBoxLayout::insertWidget((int)x[1].s_int,(QWidget*)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) {
	// insertLayout(int, QLayout*, int)
	this->QBoxLayout::insertLayout((int)x[1].s_int,(QLayout*)x[2].s_class,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_42(Smoke::Stack x) {
	// insertLayout(int, QLayout*)
	this->QBoxLayout::insertLayout((int)x[1].s_int,(QLayout*)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_43(Smoke::Stack x) {
	// setStretchFactor(QWidget*, int)
	bool xret = this->QBoxLayout::setStretchFactor((QWidget*)x[1].s_class,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_44(Smoke::Stack x) {
	// setStretchFactor(QLayout*, int)
	bool xret = this->QBoxLayout::setStretchFactor((QLayout*)x[1].s_class,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_45(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QBoxLayout::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_46(Smoke::Stack x) const {
	// minimumSize()
	QSize xret = this->QBoxLayout::minimumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_47(Smoke::Stack x) const {
	// maximumSize()
	QSize xret = this->QBoxLayout::maximumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_48(Smoke::Stack x) const {
	// hasHeightForWidth()
	bool xret = this->QBoxLayout::hasHeightForWidth();
	x[0].s_bool = xret;
    }
    void x_49(Smoke::Stack x) const {
	// heightForWidth(int)
	int xret = this->QBoxLayout::heightForWidth((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_50(Smoke::Stack x) const {
	// minimumHeightForWidth(int)
	int xret = this->QBoxLayout::minimumHeightForWidth((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_51(Smoke::Stack x) const {
	// expanding()
	QSizePolicy::ExpandData xret = this->QBoxLayout::expanding();
	x[0].s_enum = xret;
    }
    void x_52(Smoke::Stack x) {
	// invalidate()
	this->QBoxLayout::invalidate();
	(void)x; // noop (for compiler warning)
    }
    void x_53(Smoke::Stack x) {
	// iterator()
	QLayoutIterator xret = this->QBoxLayout::iterator();
	x[0].s_class = (void*)new QLayoutIterator(xret);
    }
    void x_54(Smoke::Stack x) {
	// setGeometry(const QRect&)
	this->QBoxLayout::setGeometry(*(const QRect *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_55(Smoke::Stack x) {
	// findWidget(QWidget*)
	int xret = this->QBoxLayout::findWidget((QWidget*)x[1].s_class);
	x[0].s_int = xret;
    }
    static void x_56(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QBoxLayout::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_57(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QBoxLayout::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_58(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QBoxLayout::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_59(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QBoxLayout::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_60(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QBoxLayout::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_61(Smoke::Stack x) {
	// insertItem(int, QLayoutItem*)
	this->QBoxLayout::insertItem((int)x[1].s_int,(QLayoutItem*)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    virtual void addItem(QLayoutItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(374, (void*)this, x)) return;
	this->QBoxLayout::addItem(x1);
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
	if(qt_Smoke->binding->callMethod(5226, (void*)this, x)) return;
	this->QLayout::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(357, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QBoxLayout::className();
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
	if(qt_Smoke->binding->callMethod(5225, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayout::eventFilter(x1, x2);
    }
    virtual QSizePolicy::ExpandData expanding() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(402, (void*)this, x)) {
	    QSizePolicy::ExpandData *xptr = (QSizePolicy::ExpandData *)x[0].s_class;
	    QSizePolicy::ExpandData xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::expanding();
    }
    virtual QRect geometry() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5200, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::geometry();
    }
    virtual bool hasHeightForWidth() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(399, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QBoxLayout::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(400, (void*)this, x)) return (int)x[0].s_int;
	return this->QBoxLayout::heightForWidth(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6664, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void invalidate() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(403, (void*)this, x)) return;
	this->QBoxLayout::invalidate();
    }
    virtual bool isEmpty() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5211, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayout::isEmpty();
    }
    virtual QLayoutIterator iterator() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(404, (void*)this, x)) {
	    QLayoutIterator *xptr = (QLayoutIterator *)x[0].s_class;
	    QLayoutIterator xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::iterator();
    }
    virtual QLayout* layout() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5216, (void*)this, x)) return (QLayout*)x[0].s_class;
	return this->QLayout::layout();
    }
    virtual QSize maximumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(398, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::maximumSize();
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(356, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QBoxLayout::metaObject();
    }
    virtual QSize minimumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(397, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::minimumSize();
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
	if(qt_Smoke->binding->callMethod(358, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QBoxLayout::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(360, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QBoxLayout::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(359, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QBoxLayout::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(361, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QBoxLayout::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6665, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(5249, (void*)this, x)) return;
	this->QLayoutItem::setAlignment(x1);
    }
    virtual void setAutoAdd(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(5197, (void*)this, x)) return;
	this->QLayout::setAutoAdd(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(405, (void*)this, x)) return;
	this->QBoxLayout::setGeometry(x1);
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(5186, (void*)this, x)) return;
	this->QLayout::setMargin(x1);
    }
    virtual void setMenuBar(QMenuBar* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5193, (void*)this, x)) return;
	this->QLayout::setMenuBar(x1);
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
    virtual void setSpacing(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(5187, (void*)this, x)) return;
	this->QLayout::setSpacing(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(396, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::sizeHint();
    }
    virtual QSpacerItem* spacerItem() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5247, (void*)this, x)) return (QSpacerItem*)x[0].s_class;
	return this->QLayoutItem::spacerItem();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6706, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QWidget* widget() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5244, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QLayoutItem::widget();
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 25: //QBoxLayout::Direction
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QBoxLayout::Direction;
		break;
	      case Smoke::EnumDelete:
		delete (QBoxLayout::Direction*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QBoxLayout::Direction*)xdata = (QBoxLayout::Direction)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QBoxLayout::Direction*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QBoxLayout() { qt_Smoke->binding->deleted(14, (void*)this); }
};
void xenum_QBoxLayout(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QBoxLayout::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QBoxLayout(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QBoxLayout *xself = (x_QBoxLayout*)obj;
    switch(xi) {
	case 0: x_QBoxLayout::x_0(args);	break;
	case 1: x_QBoxLayout::x_1(args);	break;
	case 2: x_QBoxLayout::x_2(args);	break;
	case 3: x_QBoxLayout::x_3(args);	break;
	case 4: x_QBoxLayout::x_4(args);	break;
	case 5: x_QBoxLayout::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: x_QBoxLayout::x_13(args);	break;
	case 14: x_QBoxLayout::x_14(args);	break;
	case 15: x_QBoxLayout::x_15(args);	break;
	case 16: x_QBoxLayout::x_16(args);	break;
	case 17: x_QBoxLayout::x_17(args);	break;
	case 18: x_QBoxLayout::x_18(args);	break;
	case 19: x_QBoxLayout::x_19(args);	break;
	case 20: x_QBoxLayout::x_20(args);	break;
	case 21: x_QBoxLayout::x_21(args);	break;
	case 22: x_QBoxLayout::x_22(args);	break;
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
	case 56: x_QBoxLayout::x_56(args);	break;
	case 57: x_QBoxLayout::x_57(args);	break;
	case 58: x_QBoxLayout::x_58(args);	break;
	case 59: x_QBoxLayout::x_59(args);	break;
	case 60: x_QBoxLayout::x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: delete (QBoxLayout*)xself;	break;
    }
}
