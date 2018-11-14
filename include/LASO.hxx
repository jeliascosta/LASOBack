//ADD LIBRAS
#ifndef INCLUDED_LASO_HXX
#define INCLUDED_LASO_HXX

#include <fstream>

#ifdef LINUX
	#define LASO_LOG_PATH "/tmp/LASO.log"
	#define DBG_LASO_LOG_PATH "/tmp/LASO_DEBUG.log"
#endif
#ifdef _WIN32
	#define LASO_LOG_PATH "C:\\ProgramData\\LASO.log"
	#define DBG_LASO_LOG_PATH "C:\\ProgramData\\LASO_DEBUG.log"
#endif 
#endif
//END LIBRAS
