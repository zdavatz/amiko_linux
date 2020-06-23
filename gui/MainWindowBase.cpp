///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Jun  5 2020)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MainWindowBase.h"

#include "../res/xpm/AmiKo.xpm"
#include "../res/xpm/compendium.xpm"
#include "../res/xpm/favorites.xpm"
#include "../res/xpm/interactions.xpm"
#include "../res/xpm/prescription.xpm"
#include "../res/xpm/print.xpm"

///////////////////////////////////////////////////////////////////////////

BEGIN_EVENT_TABLE( MainWindowBase, wxFrame )
	EVT_TEXT( wxID_MY_SEARCH_FIELD, MainWindowBase::_wxFB_OnSearchNow )
	EVT_BUTTON( wxID_BTN_PREPARATION, MainWindowBase::_wxFB_OnButtonPressed )
	EVT_BUTTON( wxID_BTN_REGISTRATION_OWNER, MainWindowBase::_wxFB_OnButtonPressed )
	EVT_BUTTON( wxID_BTN_ACTIVE_SUBSTANCE, MainWindowBase::_wxFB_OnButtonPressed )
	EVT_BUTTON( wxID_BTN_REGISTATION_NUMBER, MainWindowBase::_wxFB_OnButtonPressed )
	EVT_BUTTON( wxID_BTN_THERAPY, MainWindowBase::_wxFB_OnButtonPressed )
	EVT_BUTTON( wxID_BTN_FULL_TEXT, MainWindowBase::_wxFB_OnButtonPressed )
	EVT_DATAVIEW_SELECTION_CHANGED( wxID_SECTION_TITLES, MainWindowBase::_wxFB_OnSelectionDidChange )
	EVT_TOOL( wxID_TB_COMPENDIUM, MainWindowBase::_wxFB_OnToolbarAction )
	EVT_TOOL( wxID_TB_FAVORITES, MainWindowBase::_wxFB_OnToolbarAction )
	EVT_TOOL( wxID_TB_INTERACTIONS, MainWindowBase::_wxFB_OnToolbarAction )
	EVT_TOOL( wxID_TB_PRESCRIPTION, MainWindowBase::_wxFB_OnToolbarAction )
	EVT_TOOL( wxID_PRINT, MainWindowBase::_wxFB_OnPrintDocument )
	EVT_TOOL( wxID_ABOUT, MainWindowBase::_wxFB_OnShowAboutPanel )
	EVT_MENU( wxID_UPDATE_DB, MainWindowBase::_wxFB_OnUpdateAipsDatabase )
	EVT_MENU( wxID_LOAD_DB, MainWindowBase::_wxFB_OnLoadAipsDatabase )
END_EVENT_TABLE()

MainWindowBase::MainWindowBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	m_splitter1 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( MainWindowBase::m_splitter1OnIdle ), NULL, this );

	m_panelLeft = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerLeft;
	bSizerLeft = new wxBoxSizer( wxVERTICAL );

	mySearchField = new wxSearchCtrl( m_panelLeft, wxID_MY_SEARCH_FIELD, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifndef __WXMAC__
	mySearchField->ShowSearchButton( true );
	#endif
	mySearchField->ShowCancelButton( false );
	bSizerLeft->Add( mySearchField, 0, wxALL|wxEXPAND, 5 );

	m_button1 = new wxButton( m_panelLeft, wxID_BTN_PREPARATION, _("Preparation"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerLeft->Add( m_button1, 0, wxALL|wxEXPAND, 5 );

	m_button2 = new wxButton( m_panelLeft, wxID_BTN_REGISTRATION_OWNER, _("Registration Owner"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerLeft->Add( m_button2, 0, wxALL|wxEXPAND, 5 );

	m_button3 = new wxButton( m_panelLeft, wxID_BTN_ACTIVE_SUBSTANCE, _("Active Substance / ATC Code"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerLeft->Add( m_button3, 0, wxALL|wxEXPAND, 5 );

	m_button4 = new wxButton( m_panelLeft, wxID_BTN_REGISTATION_NUMBER, _("Registration Number"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerLeft->Add( m_button4, 0, wxALL|wxEXPAND, 5 );

	m_button5 = new wxButton( m_panelLeft, wxID_BTN_THERAPY, _("Therapy"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerLeft->Add( m_button5, 0, wxALL|wxEXPAND, 5 );

	m_button6 = new wxButton( m_panelLeft, wxID_BTN_FULL_TEXT, _("Full Text"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerLeft->Add( m_button6, 0, wxALL|wxEXPAND, 5 );

	myTableView = new TableViewDelegate(this, false);
	bSizerLeft->Add( myTableView, 2, wxEXPAND, 0 );


	m_panelLeft->SetSizer( bSizerLeft );
	m_panelLeft->Layout();
	bSizerLeft->Fit( m_panelLeft );
	m_panelRight = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	myTabView = new wxSimplebook( m_panelRight, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel9 = new wxPanel( myTabView, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	myWebView = new wxHtmlWindow( m_panel9, wxID_FI_WEBVIEW, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	bSizer5->Add( myWebView, 1, wxALL|wxEXPAND, 5 );


	m_panel9->SetSizer( bSizer5 );
	m_panel9->Layout();
	bSizer5->Fit( m_panel9 );
	myTabView->AddPage( m_panel9, _("a page"), false );
	m_panel10 = new wxPanel( myTabView, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );


	m_panel10->SetSizer( bSizer6 );
	m_panel10->Layout();
	bSizer6->Fit( m_panel10 );
	myTabView->AddPage( m_panel10, _("a page"), false );
	m_panel11 = new wxPanel( myTabView, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer11_patient;
	bSizer11_patient = new wxBoxSizer( wxVERTICAL );

	m_button7 = new wxButton( m_panel11, wxID_ANY, _("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11_patient->Add( m_button7, 0, wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,102 ), wxTE_MULTILINE );
	bSizer11_patient->Add( m_textCtrl1, 0, wxALL|wxEXPAND, 5 );

	m_staticText1 = new wxStaticText( m_panel11, wxID_ANY, _("City"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer11_patient->Add( m_staticText1, 0, wxALL, 5 );


	bSizer10->Add( bSizer11_patient, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12_doctor;
	bSizer12_doctor = new wxBoxSizer( wxVERTICAL );

	m_textCtrl2 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,91 ), wxTE_MULTILINE );
	bSizer12_doctor->Add( m_textCtrl2, 0, wxALL|wxEXPAND, 5 );

	m_bpButton1 = new wxBitmapButton( m_panel11, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 150,57 ), wxBU_AUTODRAW|0 );
	bSizer12_doctor->Add( m_bpButton1, 0, wxALL, 5 );


	bSizer10->Add( bSizer12_doctor, 1, wxEXPAND, 5 );


	bSizer7->Add( bSizer10, 1, wxEXPAND, 5 );

	myPrescriptionsTable = new wxDataViewCtrl( m_panel11, wxID_ANY, wxDefaultPosition, wxSize( -1,340 ), 0 );
	bSizer7->Add( myPrescriptionsTable, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_button8 = new wxButton( m_panel11, wxID_ANY, _("New Prescription"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button8, 0, wxALL, 5 );

	m_button9 = new wxButton( m_panel11, wxID_ANY, _("Check interactions"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button9, 0, wxALL, 5 );


	bSizer13->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button10 = new wxButton( m_panel11, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button10, 0, wxALL, 5 );

	m_button11 = new wxButton( m_panel11, wxID_ANY, _("Send"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button11, 0, wxALL, 5 );


	bSizer7->Add( bSizer13, 1, wxEXPAND, 5 );


	m_panel11->SetSizer( bSizer7 );
	m_panel11->Layout();
	bSizer7->Fit( m_panel11 );
	myTabView->AddPage( m_panel11, _("a page"), false );

	bSizer4->Add( myTabView, 1, wxEXPAND | wxALL, 0 );

	mySectionTitles = new wxDataViewListCtrl( m_panelRight, wxID_SECTION_TITLES, wxDefaultPosition, wxSize( 200,-1 ), wxDV_NO_HEADER );
	bSizer4->Add( mySectionTitles, 0, wxALL|wxEXPAND, 5 );


	m_panelRight->SetSizer( bSizer4 );
	m_panelRight->Layout();
	bSizer4->Fit( m_panelRight );
	m_splitter1->SplitVertically( m_panelLeft, m_panelRight, 0 );
	bSizer1->Add( m_splitter1, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	m_tbMain = this->CreateToolBar( wxTB_HORIZONTAL|wxTB_TEXT, wxID_ANY );
	m_tool1 = m_tbMain->AddTool( wxID_TB_COMPENDIUM, _("Compendium"), wxBitmap( compendium_xpm ), wxNullBitmap, wxITEM_NORMAL, _("AIPS Database"), wxEmptyString, NULL );

	m_tool2 = m_tbMain->AddTool( wxID_TB_FAVORITES, _("Favorites"), wxBitmap( favorites_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_tool3 = m_tbMain->AddTool( wxID_TB_INTERACTIONS, _("Interactions"), wxBitmap( interactions_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_tool4 = m_tbMain->AddTool( wxID_TB_PRESCRIPTION, _("Prescription"), wxBitmap( prescription_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_tbMain->AddSeparator();

	m_tool5 = m_tbMain->AddTool( wxID_PRINT, _("Print"), wxBitmap( print_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_toolAbout = m_tbMain->AddTool( wxID_ABOUT, _("AmiKo Desitin"), wxBitmap( AmiKo_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_tbMain->Realize();

	m_menubar1 = new wxMenuBar( 0 );
	m_menuFile = new wxMenu();
	m_menu11 = new wxMenu();
	wxMenuItem* m_menu11Item = new wxMenuItem( m_menuFile, wxID_ANY, _("Prescription Info"), wxEmptyString, wxITEM_NORMAL, m_menu11 );
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem( m_menu11, wxID_ANY, wxString( _("Find...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu11->Append( m_menuItem1 );

	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem( m_menu11, wxID_ANY, wxString( _("Find Next...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu11->Append( m_menuItem2 );

	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem( m_menu11, wxID_ANY, wxString( _("Find Previous...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu11->Append( m_menuItem3 );

	m_menuFile->Append( m_menu11Item );

	m_menuFile->AppendSeparator();

	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("Print technical information...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItem4 );

	wxMenuItem* m_menuItem5;
	m_menuItem5 = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("Print prescription...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItem5 );
	m_menuItem5->Enable( false );

	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("Print search result...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItem6 );

	m_menuFile->AppendSeparator();

	wxMenuItem* m_miUpdateDB;
	m_miUpdateDB = new wxMenuItem( m_menuFile, wxID_UPDATE_DB, wxString( _("Update via Internet") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_miUpdateDB );

	wxMenuItem* m_miLoadDB;
	m_miLoadDB = new wxMenuItem( m_menuFile, wxID_LOAD_DB, wxString( _("Update from file") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_miLoadDB );

	m_menuFile->AppendSeparator();

	wxMenuItem* m_menuItem9;
	m_menuItem9 = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("Word Analysis") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItem9 );

	m_menubar1->Append( m_menuFile, _("File") );

	m_menuEdit = new wxMenu();
	m_menubar1->Append( m_menuEdit, _("Edit") );

	m_menuPrescr = new wxMenu();
	wxMenuItem* m_menuItem10;
	m_menuItem10 = new wxMenuItem( m_menuPrescr, wxID_ANY, wxString( _("Load Prescription...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuPrescr->Append( m_menuItem10 );

	wxMenuItem* m_menuItem11;
	m_menuItem11 = new wxMenuItem( m_menuPrescr, wxID_ANY, wxString( _("Save Prescription...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuPrescr->Append( m_menuItem11 );

	m_menubar1->Append( m_menuPrescr, _("Prescription") );

	m_menuContacts = new wxMenu();
	wxMenuItem* m_menuItem12;
	m_menuItem12 = new wxMenuItem( m_menuContacts, wxID_ANY, wxString( _("Patient management...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuContacts->Append( m_menuItem12 );

	wxMenuItem* m_menuItem13;
	m_menuItem13 = new wxMenuItem( m_menuContacts, wxID_ANY, wxString( _("Doctor signature") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuContacts->Append( m_menuItem13 );

	m_menubar1->Append( m_menuContacts, _("Contacts") );

	m_menuWindow = new wxMenu();
	m_menubar1->Append( m_menuWindow, _("Window") );

	m_menuHelp = new wxMenu();
	wxMenuItem* m_menuItem14;
	m_menuItem14 = new wxMenuItem( m_menuHelp, wxID_ANY, wxString( _("Feedback") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItem14 );

	wxMenuItem* m_menuItem15;
	m_menuItem15 = new wxMenuItem( m_menuHelp, wxID_ANY, wxString( _("Share") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItem15 );

	wxMenuItem* m_menuItem16;
	m_menuItem16 = new wxMenuItem( m_menuHelp, wxID_ANY, wxString( _("Rate") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItem16 );

	m_menuHelp->AppendSeparator();

	wxMenuItem* m_menuItem17;
	m_menuItem17 = new wxMenuItem( m_menuHelp, wxID_ANY, wxString( _("Report") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItem17 );

	m_menubar1->Append( m_menuHelp, _("Help") );

	this->SetMenuBar( m_menubar1 );


	this->Centre( wxBOTH );
}

MainWindowBase::~MainWindowBase()
{
}
