//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qimage.h>
#include <qwmatrix.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qbitmap.h>
#include <qsize.h>

class x_QBitmap : public QBitmap {
public:
    static void x_0(Smoke::Stack x) {
	// QBitmap()
	x_QBitmap* xret = new x_QBitmap();
	x[0].s_class = (void*)xret;
    }
    x_QBitmap() : QBitmap() {
    }
    static void x_1(Smoke::Stack x) {
	// QBitmap(int, int, bool, QPixmap::Optimization)
	x_QBitmap* xret = new x_QBitmap((int)x[1].s_int,(int)x[2].s_int,(bool)x[3].s_bool,(QPixmap::Optimization)x[4].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(int x1, int x2, bool x3, QPixmap::Optimization x4) : QBitmap(x1, x2, x3, x4) {
    }
    static void x_2(Smoke::Stack x) {
	// QBitmap(int, int, bool)
	x_QBitmap* xret = new x_QBitmap((int)x[1].s_int,(int)x[2].s_int,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(int x1, int x2, bool x3) : QBitmap(x1, x2, x3) {
    }
    static void x_3(Smoke::Stack x) {
	// QBitmap(int, int)
	x_QBitmap* xret = new x_QBitmap((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(int x1, int x2) : QBitmap(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QBitmap(const QSize&, bool, QPixmap::Optimization)
	x_QBitmap* xret = new x_QBitmap(*(const QSize *)x[1].s_class,(bool)x[2].s_bool,(QPixmap::Optimization)x[3].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(const QSize& x1, bool x2, QPixmap::Optimization x3) : QBitmap(x1, x2, x3) {
    }
    static void x_5(Smoke::Stack x) {
	// QBitmap(const QSize&, bool)
	x_QBitmap* xret = new x_QBitmap(*(const QSize *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(const QSize& x1, bool x2) : QBitmap(x1, x2) {
    }
    static void x_6(Smoke::Stack x) {
	// QBitmap(const QSize&)
	x_QBitmap* xret = new x_QBitmap(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(const QSize& x1) : QBitmap(x1) {
    }
    static void x_7(Smoke::Stack x) {
	// QBitmap(int, int, const uchar*, bool)
	x_QBitmap* xret = new x_QBitmap((int)x[1].s_int,(int)x[2].s_int,(const uchar*)x[3].s_voidp,(bool)x[4].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(int x1, int x2, const uchar* x3, bool x4) : QBitmap(x1, x2, x3, x4) {
    }
    static void x_8(Smoke::Stack x) {
	// QBitmap(int, int, const uchar*)
	x_QBitmap* xret = new x_QBitmap((int)x[1].s_int,(int)x[2].s_int,(const uchar*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(int x1, int x2, const uchar* x3) : QBitmap(x1, x2, x3) {
    }
    static void x_9(Smoke::Stack x) {
	// QBitmap(const QSize&, const uchar*, bool)
	x_QBitmap* xret = new x_QBitmap(*(const QSize *)x[1].s_class,(const uchar*)x[2].s_voidp,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(const QSize& x1, const uchar* x2, bool x3) : QBitmap(x1, x2, x3) {
    }
    static void x_10(Smoke::Stack x) {
	// QBitmap(const QSize&, const uchar*)
	x_QBitmap* xret = new x_QBitmap(*(const QSize *)x[1].s_class,(const uchar*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(const QSize& x1, const uchar* x2) : QBitmap(x1, x2) {
    }
    static void x_11(Smoke::Stack x) {
	// QBitmap(const QBitmap&)
	x_QBitmap* xret = new x_QBitmap(*(const QBitmap *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(const QBitmap& x1) : QBitmap(x1) {
    }
    static void x_12(Smoke::Stack x) {
	// QBitmap(const QString&, const char*)
	x_QBitmap* xret = new x_QBitmap(*(const QString *)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(const QString& x1, const char* x2) : QBitmap(x1, x2) {
    }
    static void x_13(Smoke::Stack x) {
	// QBitmap(const QString&)
	x_QBitmap* xret = new x_QBitmap(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QBitmap(const QString& x1) : QBitmap(x1) {
    }
    void x_14(Smoke::Stack x) {
	// operator=(const QBitmap&)
	QBitmap& xret = this->QBitmap::operator=(*(const QBitmap *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_15(Smoke::Stack x) {
	// operator=(const QPixmap&)
	QBitmap& xret = this->QBitmap::operator=(*(const QPixmap *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_16(Smoke::Stack x) {
	// operator=(const QImage&)
	QBitmap& xret = this->QBitmap::operator=(*(const QImage *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_17(Smoke::Stack x) const {
	// xForm(const QWMatrix&)
	QBitmap xret = this->QBitmap::xForm(*(const QWMatrix *)x[1].s_class);
	x[0].s_class = (void*)new QBitmap(xret);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6826, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void detach() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7200, (void*)this, x)) return;
	this->QPixmap::detach();
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(6831, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(6828, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(7219, (void*)this, x)) return (int)x[0].s_int;
	return this->QPixmap::metric(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6824, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(6823, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    ~x_QBitmap() { qt_Smoke->binding->deleted(13, (void*)this); }
};
void xcall_QBitmap(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QBitmap *xself = (x_QBitmap*)obj;
    switch(xi) {
	case 0: x_QBitmap::x_0(args);	break;
	case 1: x_QBitmap::x_1(args);	break;
	case 2: x_QBitmap::x_2(args);	break;
	case 3: x_QBitmap::x_3(args);	break;
	case 4: x_QBitmap::x_4(args);	break;
	case 5: x_QBitmap::x_5(args);	break;
	case 6: x_QBitmap::x_6(args);	break;
	case 7: x_QBitmap::x_7(args);	break;
	case 8: x_QBitmap::x_8(args);	break;
	case 9: x_QBitmap::x_9(args);	break;
	case 10: x_QBitmap::x_10(args);	break;
	case 11: x_QBitmap::x_11(args);	break;
	case 12: x_QBitmap::x_12(args);	break;
	case 13: x_QBitmap::x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: delete (QBitmap*)xself;	break;
    }
}
