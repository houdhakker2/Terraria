#pragma once
//-----------------------------------------------------------------
// Student data
// Name: van der Lei Arne
// Group: 1DAE16
//-----------------------------------------------------------------
class Avatar;
class Inventory;
class ItemStack;

class HUD {
public:
	HUD();
	virtual ~HUD( );
	// Make objects non-copyable
	// https://msdn.microsoft.com/en-us/library/dn457344.aspx 
	HUD( const HUD& ) = delete;
	HUD& operator=( const HUD& ) = delete;

	void Tick(double deltaTime);
	void Paint(Avatar* avatarPtr);
	void ToggleInventory();
	void AddItem(ItemStack* itemPtr);
	bool IsOpen();
	ItemStack* GetSelectedItem();
	std::string ToString();
	void LoadFromString(std::string str);
private: 

	Inventory* m_CurrentInvPtr;
	Inventory* m_CurrentChestPtr;

	bool m_Open = false;
};
