#include Example.h

CExample::CExample() : m_value(0);
	
void 	CExample::Init()
{
	m_value = 0;
}

int CExample::GetValue() const
{
	return m_value;
}
