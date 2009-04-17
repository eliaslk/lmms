// generated by Fast Light User Interface Designer (fluid) version 1.0109

#ifndef EnvelopeUI_h
#define EnvelopeUI_h
#include <FL/Fl.H>
#include "WidgetPDial.h"
#include <stdio.h>
#include <stdlib.h>
#include "../globals.h"
#include <FL/Fl_Group.H>
#include "../Params/EnvelopeParams.h"
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <FL/fl_ask.H>
#include "PresetsUI.h"

class EnvelopeFreeEdit : public Fl_Box {
public:
  EnvelopeFreeEdit(int x,int y, int w, int h, const char *label=0);
  void init(EnvelopeParams *env_);
  void setpair(Fl_Box *pair_);
  int getpointx(int n);
  int getpointy(int n);
  int getnearest(int x,int y);
private:
  void draw();
public:
  int handle(int event);
private:
  Fl_Box *pair; 
  EnvelopeParams *env; 
  int oldx,oldy; 
  int currentpoint,cpx,cpdt; 
public:
  int lastpoint; 
};
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Counter.H>
#include <FL/Fl_Group.H>

class EnvelopeUI : public Fl_Group,PresetsUI_ {
public:
  EnvelopeUI(int x,int y, int w, int h, const char *label=0);
  ~EnvelopeUI();
  Fl_Double_Window* make_freemode_edit_window();
  Fl_Double_Window *freemodeeditwindow;
  EnvelopeFreeEdit *freeedit;
  Fl_Button *addpoint;
private:
  void cb_addpoint_i(Fl_Button*, void*);
  static void cb_addpoint(Fl_Button*, void*);
public:
  Fl_Button *deletepoint;
private:
  void cb_deletepoint_i(Fl_Button*, void*);
  static void cb_deletepoint(Fl_Button*, void*);
public:
  Fl_Light_Button *freemodebutton;
private:
  void cb_freemodebutton_i(Fl_Light_Button*, void*);
  static void cb_freemodebutton(Fl_Light_Button*, void*);
public:
  Fl_Check_Button *forcedreleasecheck;
private:
  void cb_forcedreleasecheck_i(Fl_Check_Button*, void*);
  static void cb_forcedreleasecheck(Fl_Check_Button*, void*);
public:
  WidgetPDial *envstretchdial;
private:
  void cb_envstretchdial_i(WidgetPDial*, void*);
  static void cb_envstretchdial(WidgetPDial*, void*);
  void cb_Close_i(Fl_Button*, void*);
  static void cb_Close(Fl_Button*, void*);
public:
  Fl_Check_Button *linearenvelopecheck;
private:
  void cb_linearenvelopecheck_i(Fl_Check_Button*, void*);
  static void cb_linearenvelopecheck(Fl_Check_Button*, void*);
public:
  Fl_Counter *sustaincounter;
private:
  void cb_sustaincounter_i(Fl_Counter*, void*);
  static void cb_sustaincounter(Fl_Counter*, void*);
  void cb_C_i(Fl_Button*, void*);
  static void cb_C(Fl_Button*, void*);
  void cb_P_i(Fl_Button*, void*);
  static void cb_P(Fl_Button*, void*);
public:
  Fl_Group* make_ADSR_window();
  Fl_Group *envADSR;
  WidgetPDial *e1adt;
private:
  void cb_e1adt_i(WidgetPDial*, void*);
  static void cb_e1adt(WidgetPDial*, void*);
public:
  WidgetPDial *e1ddt;
private:
  void cb_e1ddt_i(WidgetPDial*, void*);
  static void cb_e1ddt(WidgetPDial*, void*);
public:
  WidgetPDial *e1rdt;
private:
  void cb_e1rdt_i(WidgetPDial*, void*);
  static void cb_e1rdt(WidgetPDial*, void*);
public:
  WidgetPDial *e1sval;
private:
  void cb_e1sval_i(WidgetPDial*, void*);
  static void cb_e1sval(WidgetPDial*, void*);
public:
  Fl_Check_Button *e1forcedrelease;
private:
  void cb_e1forcedrelease_i(Fl_Check_Button*, void*);
  static void cb_e1forcedrelease(Fl_Check_Button*, void*);
public:
  WidgetPDial *e1envstretch;
private:
  void cb_e1envstretch_i(WidgetPDial*, void*);
  static void cb_e1envstretch(WidgetPDial*, void*);
  void cb_E_i(Fl_Button*, void*);
  static void cb_E(Fl_Button*, void*);
public:
  Fl_Check_Button *e1linearenvelope;
private:
  void cb_e1linearenvelope_i(Fl_Check_Button*, void*);
  static void cb_e1linearenvelope(Fl_Check_Button*, void*);
  void cb_C1_i(Fl_Button*, void*);
  static void cb_C1(Fl_Button*, void*);
  void cb_P1_i(Fl_Button*, void*);
  static void cb_P1(Fl_Button*, void*);
public:
  Fl_Group* make_ASR_window();
  Fl_Group *envASR;
  WidgetPDial *e2aval;
private:
  void cb_e2aval_i(WidgetPDial*, void*);
  static void cb_e2aval(WidgetPDial*, void*);
public:
  WidgetPDial *e2adt;
private:
  void cb_e2adt_i(WidgetPDial*, void*);
  static void cb_e2adt(WidgetPDial*, void*);
public:
  WidgetPDial *e2rval;
private:
  void cb_e2rval_i(WidgetPDial*, void*);
  static void cb_e2rval(WidgetPDial*, void*);
public:
  WidgetPDial *e2rdt;
private:
  void cb_e2rdt_i(WidgetPDial*, void*);
  static void cb_e2rdt(WidgetPDial*, void*);
public:
  WidgetPDial *e2envstretch;
private:
  void cb_e2envstretch_i(WidgetPDial*, void*);
  static void cb_e2envstretch(WidgetPDial*, void*);
public:
  Fl_Check_Button *e2forcedrelease;
private:
  void cb_e2forcedrelease_i(Fl_Check_Button*, void*);
  static void cb_e2forcedrelease(Fl_Check_Button*, void*);
  void cb_C2_i(Fl_Button*, void*);
  static void cb_C2(Fl_Button*, void*);
  void cb_P2_i(Fl_Button*, void*);
  static void cb_P2(Fl_Button*, void*);
  void cb_E1_i(Fl_Button*, void*);
  static void cb_E1(Fl_Button*, void*);
public:
  Fl_Group* make_ADSRfilter_window();
  Fl_Group *envADSRfilter;
  WidgetPDial *e3aval;
private:
  void cb_e3aval_i(WidgetPDial*, void*);
  static void cb_e3aval(WidgetPDial*, void*);
public:
  WidgetPDial *e3adt;
private:
  void cb_e3adt_i(WidgetPDial*, void*);
  static void cb_e3adt(WidgetPDial*, void*);
public:
  WidgetPDial *e3dval;
private:
  void cb_e3dval_i(WidgetPDial*, void*);
  static void cb_e3dval(WidgetPDial*, void*);
public:
  WidgetPDial *e3ddt;
private:
  void cb_e3ddt_i(WidgetPDial*, void*);
  static void cb_e3ddt(WidgetPDial*, void*);
public:
  WidgetPDial *e3rdt;
private:
  void cb_e3rdt_i(WidgetPDial*, void*);
  static void cb_e3rdt(WidgetPDial*, void*);
public:
  WidgetPDial *e3rval;
private:
  void cb_e3rval_i(WidgetPDial*, void*);
  static void cb_e3rval(WidgetPDial*, void*);
public:
  WidgetPDial *e3envstretch;
private:
  void cb_e3envstretch_i(WidgetPDial*, void*);
  static void cb_e3envstretch(WidgetPDial*, void*);
public:
  Fl_Check_Button *e3forcedrelease;
private:
  void cb_e3forcedrelease_i(Fl_Check_Button*, void*);
  static void cb_e3forcedrelease(Fl_Check_Button*, void*);
  void cb_E2_i(Fl_Button*, void*);
  static void cb_E2(Fl_Button*, void*);
  void cb_C3_i(Fl_Button*, void*);
  static void cb_C3(Fl_Button*, void*);
  void cb_P3_i(Fl_Button*, void*);
  static void cb_P3(Fl_Button*, void*);
public:
  Fl_Group* make_ASRbw_window();
  Fl_Group *envASRbw;
  WidgetPDial *e4aval;
private:
  void cb_e4aval_i(WidgetPDial*, void*);
  static void cb_e4aval(WidgetPDial*, void*);
public:
  WidgetPDial *e4adt;
private:
  void cb_e4adt_i(WidgetPDial*, void*);
  static void cb_e4adt(WidgetPDial*, void*);
public:
  WidgetPDial *e4rval;
private:
  void cb_e4rval_i(WidgetPDial*, void*);
  static void cb_e4rval(WidgetPDial*, void*);
public:
  WidgetPDial *e4rdt;
private:
  void cb_e4rdt_i(WidgetPDial*, void*);
  static void cb_e4rdt(WidgetPDial*, void*);
public:
  WidgetPDial *e4envstretch;
private:
  void cb_e4envstretch_i(WidgetPDial*, void*);
  static void cb_e4envstretch(WidgetPDial*, void*);
public:
  Fl_Check_Button *e4forcedrelease;
private:
  void cb_e4forcedrelease_i(Fl_Check_Button*, void*);
  static void cb_e4forcedrelease(Fl_Check_Button*, void*);
  void cb_C4_i(Fl_Button*, void*);
  static void cb_C4(Fl_Button*, void*);
  void cb_P4_i(Fl_Button*, void*);
  static void cb_P4(Fl_Button*, void*);
  void cb_E3_i(Fl_Button*, void*);
  static void cb_E3(Fl_Button*, void*);
public:
  Fl_Group* make_free_window();
  Fl_Group *envfree;
  Fl_Group *envfreegroup;
  EnvelopeFreeEdit *freeeditsmall;
private:
  void cb_freeeditsmall_i(EnvelopeFreeEdit*, void*);
  static void cb_freeeditsmall(EnvelopeFreeEdit*, void*);
  void cb_E4_i(Fl_Button*, void*);
  static void cb_E4(Fl_Button*, void*);
  void cb_C5_i(Fl_Button*, void*);
  static void cb_C5(Fl_Button*, void*);
  void cb_P5_i(Fl_Button*, void*);
  static void cb_P5(Fl_Button*, void*);
public:
  void init(EnvelopeParams *env_);
  void reinit();
  void refresh();
private:
  EnvelopeParams *env; 
  Fl_Group *envwindow; 
};
#endif
