//
// RenderContext.h
//
// $Id: //poco/Main/WebWidgets/include/Poco/WebWidgets/RenderContext.h#3 $
//
// Library: WebWidgets
// Package: Core
// Module:  RenderContext
//
// Definition of the RenderContext class.
//
// Copyright (c) 2008, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef WebWidgets_RenderContext_INCLUDED
#define WebWidgets_RenderContext_INCLUDED


#include "Poco/WebWidgets/WebWidgets.h"


namespace Poco {
namespace WebWidgets {


class LookAndFeel;
class WebApplication;


class WebWidgets_API RenderContext
	/// A RenderContext object contains contextual information useful
	/// to Renderable and Renderer objects during the rendering phase.
{
public:
	RenderContext(const LookAndFeel& lookAndFeel, WebApplication& app);
		/// Creates the RenderContext object.
		
	~RenderContext();
		/// Destroys the RenderContext object.

	const LookAndFeel& lookAndFeel() const;
		/// Returns the LookAndFeel object.
		
	WebApplication& application() const;
		/// Returns the WebApplication.

private:
	RenderContext();
	RenderContext(const RenderContext&);
	RenderContext& operator = (const RenderContext&);
	
	const LookAndFeel& _lookAndFeel;
	WebApplication& _app;
};


//
// inlines
//
inline const LookAndFeel& RenderContext::lookAndFeel() const
{
	return _lookAndFeel;
}


inline WebApplication& RenderContext::application() const
{
	return _app;
}


} } // namespace Poco::WebWidgets


#endif // WebWidgets_RenderContext_INCLUDED