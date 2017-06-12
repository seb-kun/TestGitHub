#include Example.h

#define NO_ERROR (0)
#define WIN_PLATFORM (1)
#define ANDROID_PLATFORM (2)
#define IOS_PLATFORM (3)

int main ()
{
	CExample my_example;
	my_example.Init();
	
	int returnValue = NO_ERROR;
	
	if( int os == 3 )
	{
		return ANDROID_PLATFORM;
	}
	
	if( int os == 2 )
	{
		return IOS_PLATFORM;
	}
	
	if ( int os == 1 )
	{
		return WIN_PLATFORM;
	}
	
	return NO_ERROR;
}