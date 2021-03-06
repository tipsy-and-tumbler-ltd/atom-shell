// Copyright (c) 2014 GitHub, Inc. All rights reserved.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_BROWSER_API_ATOM_API_MENU_GTK_H_
#define ATOM_BROWSER_API_ATOM_API_MENU_GTK_H_

#include "atom/browser/api/atom_api_menu.h"
#include "chrome/browser/ui/gtk/menu_gtk.h"

namespace atom {

namespace api {

class MenuGtk : public Menu,
                public ::MenuGtk::Delegate {
 public:
  MenuGtk();

 protected:
  virtual void Popup(Window* window) OVERRIDE;
  virtual void AttachToWindow(Window* window) OVERRIDE;

 private:
  scoped_ptr<::MenuGtk> menu_gtk_;

  DISALLOW_COPY_AND_ASSIGN(MenuGtk);
};

}  // namespace api

}  // namespace atom

#endif  // ATOM_BROWSER_API_ATOM_API_MENU_GTK_H_
