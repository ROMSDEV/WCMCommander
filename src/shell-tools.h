/*
 * Part of WCM Commander
 * https://github.com/corporateshark/WCMCommander
 * wcm@linderdaum.com
 */

#pragma once

#include "ncdialogs.h"
#include "vfs.h"

std::vector<unicode_t> ShellTabKey( NCDialogParent* par, clPtr<FS> fs, FSPath& path, const unicode_t* s, int* cursor ); //может вернуть 0 если ничего не сделано
