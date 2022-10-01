#ifndef WINDOW_MAIN_HPP
#define WINDOW_MAIN_HPP

#include "gui/table.hpp"

#include <wx/frame.h>

class WindowMain : public wxFrame
{
public:
	WindowMain();

	void OnOpenFile(wxCommandEvent& event);
	void OnHello(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);

	Table* table;
};

#endif
