#pragma once

class CMenuExtension
{
	enum MENU_ID
	{
		RELOAD_HERBS_ID = 2025,
		RELOAD_ENCHANT_ID = 2026,
		RELOAD_SPIRIT_SYSTEM_ID = 2027,
		RELOAD_SCHEME_BUFFER = 2028,
		RELOAD_ARMOR_PENALTY_ID = 2030,
		KILL_DEATH_STAT_ID = 2031,
		RELOAD_TERRITORY_DATA_ID = 2032,
		RELOAD_AUGMENTATION_ID = 2033,
		RELOAD_ITEM_DATA_EX = 2034,
		RELOAD_BANLIST = 2035,
		RELOAD_MINING_DATA = 2036,
		RELOAD_NPC_POS_EX = 2037,
		RELOAD_TVT = 2038,
		RELOAD_ANTI_DDOS = 2039,
		RELOAD_ITEM_ENCHANT = 2040,
		RELOAD_BUILDER_LIST = 2041,
		RELOAD_TELEPORT_DATA_ID = 2042,
		RELOAD_VOTE_SYSTEM = 2043,
		RELOAD_AUTO_ANNOUNCE = 2044,
		RELOAD_OBSCENE_FILTER = 2045,
		RELOAD_VISUAL_ARMOR = 2046,
		RELOAD_ALLOWED_HWID = 2047,
		RELOAD_CHAT_MANAGER = 2048,
		RELOAD_DB_NPC_MAKER = 2049,
		RELOAD_CLASS_MANAGER = 2050
	};
public:
	static void Install();
	static BOOL ShowWindowHook(HWND hWnd, int nCmdShow);
	static LRESULT CALLBACK HandleCommand(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
};