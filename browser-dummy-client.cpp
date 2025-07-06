
#include "browser-dummy-client.hpp"

CefRefPtr<CefCommandHandler> BrowserDummyClient::GetCommandHandler()
{
	return this;
}

CefRefPtr<CefRequestHandler> BrowserDummyClient::GetRequestHandler()
{
	return this;
}

CefRefPtr<CefLifeSpanHandler> BrowserDummyClient::GetLifeSpanHandler()
{
	return this;
}

bool BrowserDummyClient::OnChromeCommand(CefRefPtr<CefBrowser>, int,
					 cef_window_open_disposition_t)
{
	return true;
}

bool BrowserDummyClient::IsChromeAppMenuItemVisible(CefRefPtr<CefBrowser>, int)
{
	return false;
}

bool BrowserDummyClient::IsChromeToolbarButtonVisible(
	cef_chrome_toolbar_button_type_t)
{
	return false;
}

bool BrowserDummyClient::IsChromePageActionIconVisible(
	cef_chrome_page_action_icon_type_t)
{
	return false;
}

bool BrowserDummyClient::IsChromeAppMenuItemEnabled(CefRefPtr<CefBrowser>, int)
{
	return false;
}

bool BrowserDummyClient::OnBeforePopup(
	CefRefPtr<CefBrowser>, CefRefPtr<CefFrame>,
#if CHROME_VERSION_BUILD >= 6834
	int,
#endif
	const CefString &,
	const CefString &, cef_window_open_disposition_t, bool,
	const CefPopupFeatures &, CefWindowInfo &, CefRefPtr<CefClient> &,
	CefBrowserSettings &, CefRefPtr<CefDictionaryValue> &, bool *)
{
	return true;
}

void BrowserDummyClient::OnAfterCreated(CefRefPtr<CefBrowser> browser)
{
	if (browser && browser->GetHost()) {
		//browser->GetHost()->CloseBrowser(false);
	}
}

bool BrowserDummyClient::OnOpenURLFromTab(
	CefRefPtr<CefBrowser>, CefRefPtr<CefFrame>, const CefString &,
	CefRequestHandler::WindowOpenDisposition, bool)
{
	return true;
}

bool BrowserDummyClient::OnBeforeBrowse(CefRefPtr<CefBrowser>,
					CefRefPtr<CefFrame>,
					CefRefPtr<CefRequest>, bool, bool)
{
	return true;
}
