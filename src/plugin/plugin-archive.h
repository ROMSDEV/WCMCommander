/*
 * Part of WCM Commander
 * https://github.com/corporateshark/WCMCommander
 * wcm@linderdaum.com
 */

#pragma once

#include "libconf.h"

#ifdef LIBARCHIVE_EXIST

#include "plugin.h"


/// Archive plugin
class clArchPlugin : public clPluginFactory
{
	CLASS_COPY_PROTECTION( clArchPlugin );
	
public:
	clArchPlugin() { Register( this ); }
	virtual ~clArchPlugin() { Unregister( this ); }
	
	virtual const char* GetPluginId() const override;

	virtual clPtr<FS> OpenFileVFS( clPtr<FS> Fs, FSPath& Path, const FSNode& Node, const std::string& FileExtLower ) const override;
};

#endif //LIBARCHIVE_EXIST
