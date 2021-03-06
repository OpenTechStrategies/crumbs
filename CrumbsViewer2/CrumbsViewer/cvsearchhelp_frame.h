/////////////////////////////////////////////////////////////////////////////
// Name:        cvsearchhelp_frame.h
// Purpose:     
// Author:      RAGO
// Modified by: 
// Created:     Sun 30 Mar 16:47:12 2014
// RCS-ID:      
// Copyright:   (C) 2014 crumbssoftware.com
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (Personal Edition), Sun 30 Mar 16:47:12 2014

#ifndef _CVSEARCHHELP_FRAME_H_
#define _CVSEARCHHELP_FRAME_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/frame.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_CVSEARCHHELP_FRAME 10027
#define ID_TEXTCTRL1 10028
#define ID_BUTTON_CLOSE 10029
#define SYMBOL_CVSEARCHHELP_FRAME_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU
#define SYMBOL_CVSEARCHHELP_FRAME_TITLE _("Search Help")
#define SYMBOL_CVSEARCHHELP_FRAME_IDNAME ID_CVSEARCHHELP_FRAME
#define SYMBOL_CVSEARCHHELP_FRAME_SIZE wxSize(400, 300)
#define SYMBOL_CVSEARCHHELP_FRAME_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * CVSearchHelp_frame class declaration
 */

class CVSearchHelp_frame: public wxFrame
{    
    DECLARE_CLASS( CVSearchHelp_frame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    CVSearchHelp_frame();
    CVSearchHelp_frame( wxWindow* parent, wxWindowID id = SYMBOL_CVSEARCHHELP_FRAME_IDNAME, const wxString& caption = SYMBOL_CVSEARCHHELP_FRAME_TITLE, const wxPoint& pos = SYMBOL_CVSEARCHHELP_FRAME_POSITION, const wxSize& size = SYMBOL_CVSEARCHHELP_FRAME_SIZE, long style = SYMBOL_CVSEARCHHELP_FRAME_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CVSEARCHHELP_FRAME_IDNAME, const wxString& caption = SYMBOL_CVSEARCHHELP_FRAME_TITLE, const wxPoint& pos = SYMBOL_CVSEARCHHELP_FRAME_POSITION, const wxSize& size = SYMBOL_CVSEARCHHELP_FRAME_SIZE, long style = SYMBOL_CVSEARCHHELP_FRAME_STYLE );

    /// Destructor
    ~CVSearchHelp_frame();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin CVSearchHelp_frame event handler declarations

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON_CLOSE
    void OnButtonCloseClick( wxCommandEvent& event );

////@end CVSearchHelp_frame event handler declarations

////@begin CVSearchHelp_frame member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end CVSearchHelp_frame member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin CVSearchHelp_frame member variables
////@end CVSearchHelp_frame member variables
};

#endif
    // _CVSEARCHHELP_FRAME_H_
