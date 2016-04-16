#pragma once
//-----------------------------------------------------------------
// Student data
// Name: van der Lei Arne
// Group: 1DAE16
//-----------------------------------------------------------------

class FileManager 
{
public:
	~FileManager();
	void GetAllTextures();
	Bitmap* GetBitmap(int number);
	Bitmap* GetWallBitmap(int number);
	Bitmap* GetBackgroundBitmap(int number);
	void RemoveAllTextures();

	static FileManager* GetSingleton();

private: 
	FileManager();

	static FileManager* m_FileManagerPtr;

	std::vector<Bitmap*> m_BmpArrPtr;
	std::vector<Bitmap*> m_BmpWallArrPtr;
	std::vector<Bitmap*> m_BmpBackgroundArrPtr;
};
