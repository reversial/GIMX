/***************************************************************
 * Name:      configMain.h
 * Purpose:   Defines Application Frame
 * Author:    Matlo (mat.lau@laposte.net)
 * Created:   2010-11-09
 * Copyright: Matlo (http://diy-machine.blogspot.com/)
 * License:
 **************************************************************/

#ifndef CONFIGMAIN_H
#define CONFIGMAIN_H

//(*Headers(configFrame)
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>
#include <wx/grid.h>
#include <wx/filedlg.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

#include <event_catcher.h>
#include <ConfigurationFile.h>

class configFrame: public wxFrame
{
    public:

        configFrame(wxString file,wxWindow* parent,wxWindowID id = -1);
        virtual ~configFrame();

        void save_current();
        void load_current();
        void refresh_gui();

    private:

        //(*Handlers(configFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnMenuItemNew(wxCommandEvent& event);
        void OnGridPanelButtonCellLeftClick(wxGridEvent& event);
        void OnGridPanelButtonCellLeftClick1(wxGridEvent& event);
        void OnButtonTabModifyClick(wxCommandEvent& event);
        void OnButtonAddPanelButton(wxCommandEvent& event);
        void OnGridPanelButtonCellLeftClick2(wxGridEvent& event);
        void OnGridPanelButtonCellLeftClick3(wxGridEvent& event);
        void OnRSShapeSelect(wxCommandEvent& event);
        void OnEventTypeSelectPanelAxis(wxCommandEvent& event);
        void OnAxisTabBufferSizeText(wxCommandEvent& event);
        void OnAxisTabAxisIdSelect(wxCommandEvent& event);
        void OnButtonAddPanelAxis(wxCommandEvent& event);
        void OnButtonRemovePanelButton(wxCommandEvent& event);
        void OnButtonRemovePanelAxis(wxCommandEvent& event);
        void OnButtonTabEventTypeSelect(wxCommandEvent& event);
        void OnChoice6Select(wxCommandEvent& event);
        void OnGridPanelButtonCellLeftClick4(wxGridEvent& event);
        void OnLSDecAutoDetectSelect(wxCommandEvent& event);
        void OnLSDecAutoDetectSelect1(wxCommandEvent& event);
        void OnRSShapeSelect1(wxCommandEvent& event);
        void OnChoice6Select1(wxCommandEvent& event);
        void OnButtonAutoDetectClick(wxCommandEvent& event);
        void OnGrid3CellLeftClick(wxGridEvent& event);
        void OnAxisTabShape5Select(wxCommandEvent& event);
        void OnGrid3CellLeftClick1(wxGridEvent& event);
        void OnAxisTabShape7Select(wxCommandEvent& event);
        void OnAxisTabShape8Select(wxCommandEvent& event);
        void OnRSIncAutoDetectClick(wxCommandEvent& event);
        void OnGrid3CellLeftClick2(wxGridEvent& event);
        void OnCheckBox2Click(wxCommandEvent& event);
        void OnCheckBoxSwitchBackClick(wxCommandEvent& event);
        void OnButtonTabAutoDetectClick(wxCommandEvent& event);
        void OnAxisTabAutoDetectClick(wxCommandEvent& event);
        void OnButtonDeleteClick(wxCommandEvent& event);
        void OnMenuOpen(wxCommandEvent& event);
        void OnMenuItemController1(wxCommandEvent& event);
        void OnMenuItemController2(wxCommandEvent& event);
        void OnMenuItemController3(wxCommandEvent& event);
        void OnMenuItemController4(wxCommandEvent& event);
        void OnMenuItemController5(wxCommandEvent& event);
        void OnMenuItemController6(wxCommandEvent& event);
        void OnMenuItemController7(wxCommandEvent& event);
        void OnMenuItemConfiguration1(wxCommandEvent& event);
        void OnMenuItemConfiguration2(wxCommandEvent& event);
        void OnMenuItemConfiguration3(wxCommandEvent& event);
        void OnMenuItemConfiguration4(wxCommandEvent& event);
        void OnMenuItemConfiguration5(wxCommandEvent& event);
        void OnMenuItemConfiguration6(wxCommandEvent& event);
        void OnMenuItemConfiguration7(wxCommandEvent& event);
        void OnMenuItemConfiguration8(wxCommandEvent& event);
        void OnMenuItemExpert(wxCommandEvent& event);
        void OnMenuSave(wxCommandEvent& event);
        void OnMenuSaveAs(wxCommandEvent& event);
        void OnButtonModifyButton(wxCommandEvent& event);
        void OnGridPanelButtonCellLeftClick5(wxGridEvent& event);
        void OnButtonModifyAxis(wxCommandEvent& event);
        void OnAxisTabShapeSelect(wxCommandEvent& event);
        void OnAxisTabAxisIdSelect1(wxCommandEvent& event);
        void OnMenuItemCopyConfiguration(wxCommandEvent& event);
        void OnMenuItemPasteConfiguration(wxCommandEvent& event);
        void OnMenuItemCopyController(wxCommandEvent& event);
        void OnMenuItemPasteController(wxCommandEvent& event);
        void OnButtonDeleteTrigger(wxCommandEvent& event);
        void OnMenuReplaceMouse(wxCommandEvent& event);
        void OnMenuReplaceKeyboard(wxCommandEvent& event);
        void OnMenuItemReplaceMouseDPI(wxCommandEvent& event);
        void OnMenuReplaceMouseDPI(wxCommandEvent& event);
        void OnLSIncAutoDetectClick(wxCommandEvent& event);
        void OnLSIncDeleteClick(wxCommandEvent& event);
        void OnRSIncAutoDetectClick1(wxCommandEvent& event);
        void OnRSIncDeleteClick(wxCommandEvent& event);
        void OnLSDeadzoneChange(wxSpinEvent& event);
        void OnRSDeadZoneChange(wxSpinEvent& event);
        void OnLSDecAutoDetectClick(wxCommandEvent& event);
        void OnLSDecDeleteClick(wxCommandEvent& event);
        void OnRSDecAutoDetectClick(wxCommandEvent& event);
        void OnRSDecDeleteClick(wxCommandEvent& event);
        void OnMenuSetMouseDPI(wxCommandEvent& event);
        void OnMenuMultipleMK(wxCommandEvent& event);
        void OnTextCtrl(wxCommandEvent& event);
        void OnMenuUpdate(wxCommandEvent& event);
        //*)
        void DeleteSelectedRows(wxGrid* grid);
        void DeleteLinkedRows(wxGrid* grid, int row);
        void fillButtonAxisChoice(wxChoice* choice);
        void fillAxisAxisChoice(wxChoice* choice);
        void fillButtonChoice(wxChoice* choice);
        void replaceDevice(wxString device_type);
        void auto_detect(wxStaticText* device_type, wxStaticText* device_name, wxStaticText* device_id, wxString event_type, wxStaticText* event_id);
        void updateButtonConfigurations();
        void updateAxisConfigurations();
        wxString isAlreadyUsed(wxString device_type, wxString device_name, wxString device_id, wxString event_type, wxString event_id, int gridIndex1, int gridIndex2);

        //(*Identifiers(configFrame)
        static const long ID_STATICTEXT35;
        static const long ID_STATICTEXT27;
        static const long ID_STATICTEXT36;
        static const long ID_STATICTEXT37;
        static const long ID_BUTTON1;
        static const long ID_CHECKBOX1;
        static const long ID_STATICTEXT28;
        static const long ID_SPINCTRL5;
        static const long ID_BUTTON10;
        static const long ID_STATICTEXT58;
        static const long ID_STATICTEXT59;
        static const long ID_STATICTEXT60;
        static const long ID_STATICTEXT61;
        static const long ID_BUTTON13;
        static const long ID_BUTTON14;
        static const long ID_STATICTEXT24;
        static const long ID_SPINCTRL3;
        static const long ID_STATICTEXT62;
        static const long ID_SPINCTRL1;
        static const long ID_STATICTEXT67;
        static const long ID_STATICTEXT68;
        static const long ID_STATICTEXT69;
        static const long ID_STATICTEXT70;
        static const long ID_BUTTON15;
        static const long ID_BUTTON16;
        static const long ID_STATICTEXT19;
        static const long ID_CHOICE2;
        static const long ID_STATICTEXT48;
        static const long ID_STATICTEXT49;
        static const long ID_STATICTEXT50;
        static const long ID_STATICTEXT51;
        static const long ID_BUTTON11;
        static const long ID_BUTTON12;
        static const long ID_STATICTEXT26;
        static const long ID_SPINCTRL4;
        static const long ID_STATICTEXT25;
        static const long ID_SPINCTRL2;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT9;
        static const long ID_BUTTON17;
        static const long ID_BUTTON18;
        static const long ID_STATICTEXT23;
        static const long ID_CHOICE3;
        static const long ID_PANEL1;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT29;
        static const long ID_STATICTEXT10;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT20;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT38;
        static const long ID_STATICTEXT30;
        static const long ID_STATICTEXT39;
        static const long ID_CHOICE4;
        static const long ID_STATICTEXT40;
        static const long ID_TEXTCTRL3;
        static const long ID_BUTTON8;
        static const long ID_CHOICE5;
        static const long ID_GRID1;
        static const long ID_BUTTON4;
        static const long ID_BUTTON6;
        static const long ID_BUTTON2;
        static const long ID_PANEL2;
        static const long ID_STATICTEXT11;
        static const long ID_STATICTEXT31;
        static const long ID_STATICTEXT12;
        static const long ID_STATICTEXT13;
        static const long ID_STATICTEXT14;
        static const long ID_STATICTEXT21;
        static const long ID_STATICTEXT16;
        static const long ID_STATICTEXT15;
        static const long ID_STATICTEXT17;
        static const long ID_STATICTEXT18;
        static const long ID_STATICTEXT22;
        static const long ID_STATICTEXT33;
        static const long ID_STATICTEXT41;
        static const long ID_STATICTEXT32;
        static const long ID_STATICTEXT42;
        static const long ID_CHOICE7;
        static const long ID_STATICTEXT43;
        static const long ID_BUTTON9;
        static const long ID_CHOICE8;
        static const long ID_TEXTCTRL8;
        static const long ID_TEXTCTRL9;
        static const long ID_TEXTCTRL10;
        static const long ID_CHOICE1;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2;
        static const long ID_GRID2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON7;
        static const long ID_BUTTON5;
        static const long ID_PANEL3;
        static const long ID_NOTEBOOK1;
        static const long idMenuNew;
        static const long idMenuOpen;
        static const long idMenuSave;
        static const long idMenuSaveAs;
        static const long idMenuQuit;
        static const long ID_MENUITEM12;
        static const long ID_MENUITEM18;
        static const long ID_MENUITEM17;
        static const long ID_MENUITEM19;
        static const long ID_MENUITEM23;
        static const long ID_MENUITEM20;
        static const long ID_MENUITEM22;
        static const long ID_MENUITEM21;
        static const long ID_MENUITEM1;
        static const long ID_MENUITEM2;
        static const long ID_MENUITEM3;
        static const long ID_MENUITEM4;
        static const long ID_MENUITEM5;
        static const long ID_MENUITEM6;
        static const long ID_MENUITEM7;
        static const long ID_MENUITEM8;
        static const long ID_MENUITEM9;
        static const long ID_MENUITEM10;
        static const long ID_MENUITEM11;
        static const long ID_MENUITEM13;
        static const long ID_MENUITEM14;
        static const long ID_MENUITEM15;
        static const long ID_MENUITEM16;
        static const long ID_MENUITEM24;
        static const long ID_MENUITEM25;
        static const long ID_MENUITEM26;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(configFrame)
        wxStaticText* StaticTextStepsPanelOverall;
        wxStaticText* StaticTextSmoothingPanelAxis;
        wxStaticText* StaticTextEventTypePanelButton;
        wxStaticText* RSIncButtonId;
        wxMenuItem* MenuItemLinkControls;
        wxStaticText* StaticTextEmptyPanelAxis;
        wxMenuItem* MenuController2;
        wxButton* RSIncDelete;
        wxTextCtrl* AxisTabAcceleration;
        wxStaticText* StaticTextDeviceTypePanelButton;
        wxStaticText* StaticTextDeadZonePanelOverall;
        wxStaticText* RSDecDeviceName;
        wxMenuItem* MenuController1;
        wxMenuItem* MenuItemReplaceMouse;
        wxStaticText* StaticTextEventIdPanelButton;
        wxMenuItem* MenuItemPasteController;
        wxStaticText* ButtonTabDeviceId;
        wxNotebook* Notebook1;
        wxStaticText* LSDecDeviceId;
        wxStaticText* StaticTextEventIdPanelAxis;
        wxStaticText* StaticTextDeviceTypePanelAxis;
        wxStaticText* StaticTextSensPanelAxis;
        wxStaticText* RSIncDeviceName;
        wxMenuItem* MenuItemSaveAs;
        wxButton* ButtonTabAutoDetect;
        wxStaticText* ButtonTabDeviceType;
        wxStaticText* LSIncButtonId;
        wxChoice* RSShape;
        wxMenu* MenuController;
        wxButton* ButtonAutoDetect;
        wxChoice* ButtonTabButtonId;
        wxButton* AxisTabAutoDetect;
        wxStaticText* ButtonTabEventId;
        wxStaticText* StaticTextDeviceNamePanelButton;
        wxChoice* LSShape;
        wxStaticText* ProfileTriggerDeviceType;
        wxMenuItem* MenuItemSave;
        wxStaticText* AxisTabEventId;
        wxStaticText* RSDecDeviceType;
        wxStaticText* StaticTextThresholdPanelButton;
        wxButton* LSDecAutoDetect;
        wxMenuItem* MenuConfiguration1;
        wxStaticText* StaticTextButtonPanelButton;
        wxMenuItem* MenuController5;
        wxSpinCtrl* RSDeadZone;
        wxStaticText* StaticTextEventTypePanelAxis;
        wxMenuItem* MenuItemSetMouseDPI;
        wxSpinCtrl* ProfileTriggerDelay;
        wxMenuItem* MenuConfiguration2;
        wxButton* RSIncAutoDetect;
        wxMenuItem* MenuConfiguration8;
        wxPanel* PanelOverall;
        wxStaticText* LSIncDeviceName;
        wxStaticText* StaticText1;
        wxStaticText* RSDecButtonId;
        wxStaticText* AxisTabDeviceId;
        wxFileDialog* FileDialog1;
        wxMenuItem* MenuConfiguration3;
        wxSpinCtrl* RSSteps;
        wxStaticText* AxisTabDeviceName;
        wxMenuItem* MenuController7;
        wxMenu* MenuFile;
        wxStaticText* LSDecDeviceName;
        wxTextCtrl* AxisTabSensitivity;
        wxStaticText* LSIncDeviceId;
        wxMenuItem* MenuController4;
        wxStaticText* LSDecButtonId;
        wxButton* RSDecDelete;
        wxStaticText* ProfileTriggerButtonId;
        wxPanel* PanelAxis;
        wxCheckBox* CheckBoxSwitchBack;
        wxMenuItem* MenuController6;
        wxMenuItem* MenuItemCopyController;
        wxMenuItem* MenuItemReplaceKeyboard;
        wxChoice* AxisTabEventType;
        wxButton* ButtonDelete;
        wxButton* Button5;
        wxGrid* GridPanelAxis;
        wxMenuItem* MenuItemNew;
        wxTextCtrl* AxisTabBufferSize;
        wxStaticText* AxisTabDeviceType;
        wxMenuItem* MenuConfiguration6;
        wxButton* Button3;
        wxStaticText* RSDecDeviceId;
        wxStaticText* RSIncDeviceId;
        wxGrid* GridPanelButton;
        wxStaticText* StaticTextDeadZonePanelAxis;
        wxMenuItem* MenuItemReplaceMouseDPI;
        wxButton* Button7;
        wxTextCtrl* AxisTabDeadZone;
        wxStaticText* StaticTextSteps2PanelOverall;
        wxStaticText* RSIncDeviceType;
        wxStaticText* StaticTextDZPanelAxis;
        wxStatusBar* StatusBar1;
        wxTextCtrl* AxisTabFilter;
        wxStaticText* StaticTextShapePanelOverall;
        wxButton* LSIncAutoDetect;
        wxButton* LSDecDelete;
        wxMenuItem* MenuItemPasteProfile;
        wxStaticText* LSDecDeviceType;
        wxButton* ButtonTabModify;
        wxChoice* AxisTabShape;
        wxStaticText* StaticTextDelayPanelOverall;
        wxButton* ButtonTabRemove;
        wxStaticText* StaticTextDeviceIdPanelButton;
        wxSpinCtrl* LSSteps;
        wxStaticText* StaticTextDeviceIdPanelAxis;
        wxPanel* PanelButton;
        wxMenuItem* MenuConfiguration7;
        wxStaticText* StaticTextAccelPanelAxis;
        wxMenuItem* MenuConfiguration4;
        wxStaticText* StaticTextShapePanelAxis;
        wxStaticText* ProfileTriggerDeviceId;
        wxMenu* MenuAdvanced;
        wxMenuItem* MenuController3;
        wxStaticText* StaticTextEmptyPanelButton;
        wxSpinCtrl* LSDeadzone;
        wxButton* ButtonTabAdd;
        wxButton* RSDecAutoDetect;
        wxMenuItem* MenuItemCopyProfile;
        wxStaticText* LSIncDeviceType;
        wxMenuItem* MenuItemMultipleMiceAndKeyboards;
        wxStaticText* StaticTextAxisPanelAxis;
        wxChoice* ButtonTabEventType;
        wxTextCtrl* ButtonTabThreshold;
        wxStaticText* StaticTextShape2PanelOverall;
        wxButton* LSIncDelete;
        wxStaticText* ProfileTriggerDeviceName;
        wxMenu* MenuEdit;
        wxChoice* AxisTabAxisId;
        wxMenuItem* MenuUpdate;
        wxMenu* MenuConfiguration;
        wxMenuItem* MenuConfiguration5;
        wxStaticText* ButtonTabDeviceName;
        //*)

        event_catcher evcatch;
        ConfigurationFile configFile;
        unsigned int currentController;
        unsigned int currentConfiguration;

        Configuration tempConfiguration;
        Controller tempController;

        unsigned int grid1mod;
        unsigned int grid2mod;
        
        wxString default_directory;

        DECLARE_EVENT_TABLE()
};

#endif // CONFIGMAIN_H