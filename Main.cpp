#include Example.h

#define NO_ERROR (0)
#define ANDROID_PLATFORM (1)
#define IOS_PLATFORM (2)

int main ()
{
	int returnValue = NO_ERROR;
	
	if( int os == 3 )
	{
		return ANDROID_PLATFORM;
	}
	
	if( int os == 2 )
	{
		return IOS_PLATFORM;
	}
	
	return NO_ERROR;
}