//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qtextcodec.h>

class x_QTextDecoder : public QTextDecoder {
public:
    static void x_0(Smoke::Stack x) {
	// QTextDecoder()
	x_QTextDecoder* xret = new x_QTextDecoder();
	x[0].s_class = (void*)xret;
    }
    x_QTextDecoder() : QTextDecoder() {
    }
    static void x_1(Smoke::Stack x) {
	// QTextDecoder(const QTextDecoder&)
	x_QTextDecoder* xret = new x_QTextDecoder(*(const QTextDecoder *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTextDecoder(const QTextDecoder& x1) : QTextDecoder(x1) {
    }
    virtual QString toUnicode(const char* x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	qt_Smoke->binding->callMethod(10434, (void*)this, x, true /*pure virtual*/);
	QString *xptr = (QString *)x[0].s_class;
	QString xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    ~x_QTextDecoder() { qt_Smoke->binding->deleted(322, (void*)this); }
};
void xcall_QTextDecoder(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTextDecoder *xself = (x_QTextDecoder*)obj;
    switch(xi) {
	case 0: x_QTextDecoder::x_0(args);	break;
	case 1: x_QTextDecoder::x_1(args);	break;
	case 2: delete (QTextDecoder*)xself;	break;
    }
}
