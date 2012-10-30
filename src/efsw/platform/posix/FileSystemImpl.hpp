#ifndef EFSW_FILESYSTEMIMPLPOSIX_HPP
#define EFSW_FILESYSTEMIMPLPOSIX_HPP

#include <efsw/base.hpp>
#include <efsw/FileInfo.hpp>
#include <map>

#if defined( EFSW_PLATFORM_POSIX )

namespace efsw { namespace Platform {

class FileSystem
{
	public:
		static FileInfoMap filesInfoFromPath( const std::string& path );

		static char getOSSlash();

		static bool isDirectory( const std::string& path );
};

}}

#endif

#endif
