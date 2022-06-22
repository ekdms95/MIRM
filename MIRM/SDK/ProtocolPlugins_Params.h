#pragma once

/**
 * Name: MIRM
 * Version: 0623
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.has_goods_info
	 */
	struct Ump_account_storage_buy_sc_has_goods_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.has_account_storage_item
	 */
	struct Ump_account_storage_buy_sc_has_account_storage_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.has_account_storage_info
	 */
	struct Ump_account_storage_buy_sc_has_account_storage_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.get_goods_info
	 */
	struct Ump_account_storage_buy_sc_get_goods_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.get_account_storage_item
	 */
	struct Ump_account_storage_buy_sc_get_account_storage_item_Params
	{
	public:
		struct Fmps_inventory                                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.get_account_storage_info
	 */
	struct Ump_account_storage_buy_sc_get_account_storage_info_Params
	{
	public:
		struct Fmps_account_storage                                ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.alloc_goods_info
	 */
	struct Ump_account_storage_buy_sc_alloc_goods_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.alloc_account_storage_item
	 */
	struct Ump_account_storage_buy_sc_alloc_account_storage_item_Params
	{
	public:
		struct Fmps_inventory                                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_account_storage_buy_sc.alloc_account_storage_info
	 */
	struct Ump_account_storage_buy_sc_alloc_account_storage_info_Params
	{
	public:
		struct Fmps_account_storage                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_add_sc.has_achieve_info
	 */
	struct Ump_achieve_add_sc_has_achieve_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_add_sc.get_achieve_info
	 */
	struct Ump_achieve_add_sc_get_achieve_info_Params
	{
	public:
		struct Fmps_achieve_info                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_add_sc.alloc_achieve_info
	 */
	struct Ump_achieve_add_sc_alloc_achieve_info_Params
	{
	public:
		struct Fmps_achieve_info                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.has_title_info
	 */
	struct Ump_achieve_reward_sc_has_title_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.has_item_add
	 */
	struct Ump_achieve_reward_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.has_achieve_info
	 */
	struct Ump_achieve_reward_sc_has_achieve_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.get_title_info
	 */
	struct Ump_achieve_reward_sc_get_title_info_Params
	{
	public:
		struct Fmps_title_info                                     ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.get_item_add
	 */
	struct Ump_achieve_reward_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.get_achieve_info
	 */
	struct Ump_achieve_reward_sc_get_achieve_info_Params
	{
	public:
		struct Fmps_achieve_info                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.alloc_title_info
	 */
	struct Ump_achieve_reward_sc_alloc_title_info_Params
	{
	public:
		struct Fmps_title_info                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.alloc_item_add
	 */
	struct Ump_achieve_reward_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_achieve_reward_sc.alloc_achieve_info
	 */
	struct Ump_achieve_reward_sc_alloc_achieve_info_Params
	{
	public:
		struct Fmps_achieve_info                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_acupoints_levelup_sc.has_meridians
	 */
	struct Ump_acupoints_levelup_sc_has_meridians_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_acupoints_levelup_sc.has_info
	 */
	struct Ump_acupoints_levelup_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_acupoints_levelup_sc.get_meridians
	 */
	struct Ump_acupoints_levelup_sc_get_meridians_Params
	{
	public:
		struct Fmps_meridians                                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_acupoints_levelup_sc.get_info
	 */
	struct Ump_acupoints_levelup_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_acupoints_levelup_sc.alloc_meridians
	 */
	struct Ump_acupoints_levelup_sc_alloc_meridians_Params
	{
	public:
		struct Fmps_meridians                                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_acupoints_levelup_sc.alloc_info
	 */
	struct Ump_acupoints_levelup_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_game_login_cs.has_start_position
	 */
	struct Ump_ai_game_login_cs_has_start_position_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_game_login_cs.get_start_position
	 */
	struct Ump_ai_game_login_cs_get_start_position_Params
	{
	public:
		struct Fmps_zone_info                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_game_login_cs.alloc_start_position
	 */
	struct Ump_ai_game_login_cs_alloc_start_position_Params
	{
	public:
		struct Fmps_zone_info                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_setup_config_cs.has_config_data
	 */
	struct Ump_ai_setup_config_cs_has_config_data_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_setup_config_cs.get_config_data
	 */
	struct Ump_ai_setup_config_cs_get_config_data_Params
	{
	public:
		struct Fmps_ai_setup_config                                ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_setup_config_cs.alloc_config_data
	 */
	struct Ump_ai_setup_config_cs_alloc_config_data_Params
	{
	public:
		struct Fmps_ai_setup_config                                ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_setup_config_info_sc.has_config_data
	 */
	struct Ump_ai_setup_config_info_sc_has_config_data_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_setup_config_info_sc.get_config_data
	 */
	struct Ump_ai_setup_config_info_sc_get_config_data_Params
	{
	public:
		struct Fmps_ai_setup_config                                ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_ai_setup_config_info_sc.alloc_config_data
	 */
	struct Ump_ai_setup_config_info_sc_alloc_config_data_Params
	{
	public:
		struct Fmps_ai_setup_config                                ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_arena_battle_season_reward_sc.has_season_reward_info
	 */
	struct Ump_arena_battle_season_reward_sc_has_season_reward_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_arena_battle_season_reward_sc.get_season_reward_info
	 */
	struct Ump_arena_battle_season_reward_sc_get_season_reward_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_arena_battle_season_reward_sc.alloc_season_reward_info
	 */
	struct Ump_arena_battle_season_reward_sc_alloc_season_reward_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_avatar_slot_set_sc.has_release_avatar
	 */
	struct Ump_avatar_slot_set_sc_has_release_avatar_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_avatar_slot_set_sc.has_equip_avatar
	 */
	struct Ump_avatar_slot_set_sc_has_equip_avatar_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_avatar_slot_set_sc.get_release_avatar
	 */
	struct Ump_avatar_slot_set_sc_get_release_avatar_Params
	{
	public:
		struct Fmps_avatar                                         ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_avatar_slot_set_sc.get_equip_avatar
	 */
	struct Ump_avatar_slot_set_sc_get_equip_avatar_Params
	{
	public:
		struct Fmps_avatar                                         ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_avatar_slot_set_sc.alloc_release_avatar
	 */
	struct Ump_avatar_slot_set_sc_alloc_release_avatar_Params
	{
	public:
		struct Fmps_avatar                                         ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_avatar_slot_set_sc.alloc_equip_avatar
	 */
	struct Ump_avatar_slot_set_sc_alloc_equip_avatar_Params
	{
	public:
		struct Fmps_avatar                                         ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.has_seasonpass
	 */
	struct Ump_cash_shop_buy_sc_has_seasonpass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.has_package_product
	 */
	struct Ump_cash_shop_buy_sc_has_package_product_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.has_cash_info
	 */
	struct Ump_cash_shop_buy_sc_has_cash_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.has_buy_item
	 */
	struct Ump_cash_shop_buy_sc_has_buy_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.has_buy_count
	 */
	struct Ump_cash_shop_buy_sc_has_buy_count_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.get_seasonpass
	 */
	struct Ump_cash_shop_buy_sc_get_seasonpass_Params
	{
	public:
		struct Fmps_seasonpass                                     ReturnValue;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.get_package_product
	 */
	struct Ump_cash_shop_buy_sc_get_package_product_Params
	{
	public:
		struct Fmps_cash_package_product                           ReturnValue;                                             // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.get_cash_info
	 */
	struct Ump_cash_shop_buy_sc_get_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.get_buy_item
	 */
	struct Ump_cash_shop_buy_sc_get_buy_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.get_buy_count
	 */
	struct Ump_cash_shop_buy_sc_get_buy_count_Params
	{
	public:
		struct Fmps_cash_shop_buy_count                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.alloc_seasonpass
	 */
	struct Ump_cash_shop_buy_sc_alloc_seasonpass_Params
	{
	public:
		struct Fmps_seasonpass                                     ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.alloc_package_product
	 */
	struct Ump_cash_shop_buy_sc_alloc_package_product_Params
	{
	public:
		struct Fmps_cash_package_product                           ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.alloc_cash_info
	 */
	struct Ump_cash_shop_buy_sc_alloc_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.alloc_buy_item
	 */
	struct Ump_cash_shop_buy_sc_alloc_buy_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_buy_sc.alloc_buy_count
	 */
	struct Ump_cash_shop_buy_sc_alloc_buy_count_Params
	{
	public:
		struct Fmps_cash_shop_buy_count                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_cart_get_sc.has_get_item
	 */
	struct Ump_cash_shop_cart_get_sc_has_get_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_cart_get_sc.get_get_item
	 */
	struct Ump_cash_shop_cart_get_sc_get_get_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_cart_get_sc.alloc_get_item
	 */
	struct Ump_cash_shop_cart_get_sc_alloc_get_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_cs.has_cash_info
	 */
	struct Ump_cash_shop_daily_get_cs_has_cash_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_cs.get_cash_info
	 */
	struct Ump_cash_shop_daily_get_cs_get_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_cs.alloc_cash_info
	 */
	struct Ump_cash_shop_daily_get_cs_alloc_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.has_info_product
	 */
	struct Ump_cash_shop_daily_get_sc_has_info_product_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.has_info_item
	 */
	struct Ump_cash_shop_daily_get_sc_has_info_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.has_cash_info
	 */
	struct Ump_cash_shop_daily_get_sc_has_cash_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.get_info_product
	 */
	struct Ump_cash_shop_daily_get_sc_get_info_product_Params
	{
	public:
		struct Fmps_cash_package_product                           ReturnValue;                                             // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.get_info_item
	 */
	struct Ump_cash_shop_daily_get_sc_get_info_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.get_cash_info
	 */
	struct Ump_cash_shop_daily_get_sc_get_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.alloc_info_product
	 */
	struct Ump_cash_shop_daily_get_sc_alloc_info_product_Params
	{
	public:
		struct Fmps_cash_package_product                           ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.alloc_info_item
	 */
	struct Ump_cash_shop_daily_get_sc_alloc_info_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_daily_get_sc.alloc_cash_info
	 */
	struct Ump_cash_shop_daily_get_sc_alloc_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_exchange_reset_sc.has_item_add
	 */
	struct Ump_cash_shop_exchange_reset_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_exchange_reset_sc.get_item_add
	 */
	struct Ump_cash_shop_exchange_reset_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_exchange_reset_sc.alloc_item_add
	 */
	struct Ump_cash_shop_exchange_reset_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_info_sc.has_cash_info
	 */
	struct Ump_cash_shop_info_sc_has_cash_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_info_sc.get_cash_info
	 */
	struct Ump_cash_shop_info_sc_get_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_cash_shop_info_sc.alloc_cash_info
	 */
	struct Ump_cash_shop_info_sc_alloc_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_arsenal_build_donate_sc.has_use_item_info
	 */
	struct Ump_castle_town_arsenal_build_donate_sc_has_use_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_arsenal_build_donate_sc.get_use_item_info
	 */
	struct Ump_castle_town_arsenal_build_donate_sc_get_use_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_arsenal_build_donate_sc.alloc_use_item_info
	 */
	struct Ump_castle_town_arsenal_build_donate_sc_alloc_use_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_arsenal_build_work_info_sc.has_work_info
	 */
	struct Ump_castle_town_arsenal_build_work_info_sc_has_work_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_arsenal_build_work_info_sc.get_work_info
	 */
	struct Ump_castle_town_arsenal_build_work_info_sc_get_work_info_Params
	{
	public:
		struct Fmps_castle_town_arsenal_work                       ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_arsenal_build_work_info_sc.alloc_work_info
	 */
	struct Ump_castle_town_arsenal_build_work_info_sc_alloc_work_info_Params
	{
	public:
		struct Fmps_castle_town_arsenal_work                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_dinner_get_item_sc.has_item_info
	 */
	struct Ump_castle_town_dinner_get_item_sc_has_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_dinner_get_item_sc.get_item_info
	 */
	struct Ump_castle_town_dinner_get_item_sc_get_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_dinner_get_item_sc.alloc_item_info
	 */
	struct Ump_castle_town_dinner_get_item_sc_alloc_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.has_dinner_work
	 */
	struct Ump_castle_town_hud_info_sc_has_dinner_work_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.has_character_specialties_work
	 */
	struct Ump_castle_town_hud_info_sc_has_character_specialties_work_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.has_arsenal_work
	 */
	struct Ump_castle_town_hud_info_sc_has_arsenal_work_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.get_dinner_work
	 */
	struct Ump_castle_town_hud_info_sc_get_dinner_work_Params
	{
	public:
		struct Fmps_castle_town_dinner_work                        ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.get_character_specialties_work
	 */
	struct Ump_castle_town_hud_info_sc_get_character_specialties_work_Params
	{
	public:
		struct Fmps_castle_town_character_specialties_work         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.get_arsenal_work
	 */
	struct Ump_castle_town_hud_info_sc_get_arsenal_work_Params
	{
	public:
		struct Fmps_castle_town_arsenal_work                       ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.alloc_dinner_work
	 */
	struct Ump_castle_town_hud_info_sc_alloc_dinner_work_Params
	{
	public:
		struct Fmps_castle_town_dinner_work                        ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.alloc_character_specialties_work
	 */
	struct Ump_castle_town_hud_info_sc_alloc_character_specialties_work_Params
	{
	public:
		struct Fmps_castle_town_character_specialties_work         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_hud_info_sc.alloc_arsenal_work
	 */
	struct Ump_castle_town_hud_info_sc_alloc_arsenal_work_Params
	{
	public:
		struct Fmps_castle_town_arsenal_work                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_single_specialties_hud_sc.has_specialties_work
	 */
	struct Ump_castle_town_single_specialties_hud_sc_has_specialties_work_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_single_specialties_hud_sc.get_specialties_work
	 */
	struct Ump_castle_town_single_specialties_hud_sc_get_specialties_work_Params
	{
	public:
		struct Fmps_castle_town_specialties_work                   ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_single_specialties_hud_sc.alloc_specialties_work
	 */
	struct Ump_castle_town_single_specialties_hud_sc_alloc_specialties_work_Params
	{
	public:
		struct Fmps_castle_town_specialties_work                   ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_dinner_sc.has_dinner_work
	 */
	struct Ump_castle_town_start_dinner_sc_has_dinner_work_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_dinner_sc.get_dinner_work
	 */
	struct Ump_castle_town_start_dinner_sc_get_dinner_work_Params
	{
	public:
		struct Fmps_castle_town_dinner_work                        ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_dinner_sc.alloc_dinner_work
	 */
	struct Ump_castle_town_start_dinner_sc_alloc_dinner_work_Params
	{
	public:
		struct Fmps_castle_town_dinner_work                        ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_specialties_sc.has_use_item_info
	 */
	struct Ump_castle_town_start_specialties_sc_has_use_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_specialties_sc.has_town_specialties_work
	 */
	struct Ump_castle_town_start_specialties_sc_has_town_specialties_work_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_specialties_sc.get_use_item_info
	 */
	struct Ump_castle_town_start_specialties_sc_get_use_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_specialties_sc.get_town_specialties_work
	 */
	struct Ump_castle_town_start_specialties_sc_get_town_specialties_work_Params
	{
	public:
		struct Fmps_castle_town_character_specialties_work         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_specialties_sc.alloc_use_item_info
	 */
	struct Ump_castle_town_start_specialties_sc_alloc_use_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_start_specialties_sc.alloc_town_specialties_work
	 */
	struct Ump_castle_town_start_specialties_sc_alloc_town_specialties_work_Params
	{
	public:
		struct Fmps_castle_town_character_specialties_work         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_work_sc.has_use_item_info
	 */
	struct Ump_castle_town_work_sc_has_use_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_work_sc.get_use_item_info
	 */
	struct Ump_castle_town_work_sc_get_use_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_work_sc.alloc_use_item_info
	 */
	struct Ump_castle_town_work_sc_alloc_use_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_work_use_character_item_cs.has_work
	 */
	struct Ump_castle_town_work_use_character_item_cs_has_work_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_work_use_character_item_cs.get_work
	 */
	struct Ump_castle_town_work_use_character_item_cs_get_work_Params
	{
	public:
		struct Fmps_castle_town_work                               ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_castle_town_work_use_character_item_cs.alloc_work
	 */
	struct Ump_castle_town_work_use_character_item_cs_alloc_work_Params
	{
	public:
		struct Fmps_castle_town_work                               ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_condition_refill_sc.has_info
	 */
	struct Ump_condition_refill_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_condition_refill_sc.get_info
	 */
	struct Ump_condition_refill_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_condition_refill_sc.alloc_info
	 */
	struct Ump_condition_refill_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_customizing_save_sc.has_update_goods
	 */
	struct Ump_customizing_save_sc_has_update_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_customizing_save_sc.get_update_goods
	 */
	struct Ump_customizing_save_sc_get_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_customizing_save_sc.alloc_update_goods
	 */
	struct Ump_customizing_save_sc_alloc_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_decrement_item_durability_sc.has_durability_info
	 */
	struct Ump_decrement_item_durability_sc_has_durability_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_decrement_item_durability_sc.get_durability_info
	 */
	struct Ump_decrement_item_durability_sc_get_durability_info_Params
	{
	public:
		struct Fmps_decrement_item_durability                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_decrement_item_durability_sc.alloc_durability_info
	 */
	struct Ump_decrement_item_durability_sc_alloc_durability_info_Params
	{
	public:
		struct Fmps_decrement_item_durability                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_demon_summon_info_sc.has_info
	 */
	struct Ump_demon_summon_info_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_demon_summon_info_sc.get_info
	 */
	struct Ump_demon_summon_info_sc_get_info_Params
	{
	public:
		struct Fmps_zone_object_info                               ReturnValue;                                             // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_demon_summon_info_sc.alloc_info
	 */
	struct Ump_demon_summon_info_sc_alloc_info_Params
	{
	public:
		struct Fmps_zone_object_info                               ReturnValue;                                             // 0x0000(0x0320)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_add_sc.has_stat
	 */
	struct Ump_dictionary_add_sc_has_stat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_add_sc.has_dic_info
	 */
	struct Ump_dictionary_add_sc_has_dic_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_add_sc.get_stat
	 */
	struct Ump_dictionary_add_sc_get_stat_Params
	{
	public:
		struct Fmps_dic_stat                                       ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_add_sc.get_dic_info
	 */
	struct Ump_dictionary_add_sc_get_dic_info_Params
	{
	public:
		struct Fmps_dictionary_info                                ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_add_sc.alloc_stat
	 */
	struct Ump_dictionary_add_sc_alloc_stat_Params
	{
	public:
		struct Fmps_dic_stat                                       ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_add_sc.alloc_dic_info
	 */
	struct Ump_dictionary_add_sc_alloc_dic_info_Params
	{
	public:
		struct Fmps_dictionary_info                                ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_expire_sc.has_stat
	 */
	struct Ump_dictionary_expire_sc_has_stat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_expire_sc.get_stat
	 */
	struct Ump_dictionary_expire_sc_get_stat_Params
	{
	public:
		struct Fmps_dic_stat                                       ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_expire_sc.alloc_stat
	 */
	struct Ump_dictionary_expire_sc_alloc_stat_Params
	{
	public:
		struct Fmps_dic_stat                                       ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_reward_get_sc.has_reward
	 */
	struct Ump_dictionary_reward_get_sc_has_reward_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_reward_get_sc.get_reward
	 */
	struct Ump_dictionary_reward_get_sc_get_reward_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_dictionary_reward_get_sc.alloc_reward
	 */
	struct Ump_dictionary_reward_get_sc_alloc_reward_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_compose_sc.has_info
	 */
	struct Ump_enchant_stone_compose_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_compose_sc.get_info
	 */
	struct Ump_enchant_stone_compose_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_compose_sc.alloc_info
	 */
	struct Ump_enchant_stone_compose_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_equip_sc.has_update_info
	 */
	struct Ump_enchant_stone_equip_sc_has_update_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_equip_sc.has_info
	 */
	struct Ump_enchant_stone_equip_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_equip_sc.get_update_info
	 */
	struct Ump_enchant_stone_equip_sc_get_update_info_Params
	{
	public:
		struct Fmps_enchant_stone_update                           ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_equip_sc.get_info
	 */
	struct Ump_enchant_stone_equip_sc_get_info_Params
	{
	public:
		struct Fmps_item_update                                    ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_equip_sc.alloc_update_info
	 */
	struct Ump_enchant_stone_equip_sc_alloc_update_info_Params
	{
	public:
		struct Fmps_enchant_stone_update                           ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_equip_sc.alloc_info
	 */
	struct Ump_enchant_stone_equip_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_update                                    ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_slot_open_sc.has_info
	 */
	struct Ump_enchant_stone_slot_open_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_slot_open_sc.get_info
	 */
	struct Ump_enchant_stone_slot_open_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_slot_open_sc.alloc_info
	 */
	struct Ump_enchant_stone_slot_open_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_upgrade_sc.has_info
	 */
	struct Ump_enchant_stone_upgrade_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_upgrade_sc.get_info
	 */
	struct Ump_enchant_stone_upgrade_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enchant_stone_upgrade_sc.alloc_info
	 */
	struct Ump_enchant_stone_upgrade_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enter_story_dungeon_sc.has_pos
	 */
	struct Ump_enter_story_dungeon_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enter_story_dungeon_sc.get_pos
	 */
	struct Ump_enter_story_dungeon_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_enter_story_dungeon_sc.alloc_pos
	 */
	struct Ump_enter_story_dungeon_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_buy_sc.has_info
	 */
	struct Ump_exchange_buy_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_buy_sc.get_info
	 */
	struct Ump_exchange_buy_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_buy_sc.alloc_info
	 */
	struct Ump_exchange_buy_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_gold_withdraw_sc.has_info
	 */
	struct Ump_exchange_gold_withdraw_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_gold_withdraw_sc.get_info
	 */
	struct Ump_exchange_gold_withdraw_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_gold_withdraw_sc.alloc_info
	 */
	struct Ump_exchange_gold_withdraw_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_item_withdraw_sc.has_item
	 */
	struct Ump_exchange_item_withdraw_sc_has_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_item_withdraw_sc.get_item
	 */
	struct Ump_exchange_item_withdraw_sc_get_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_item_withdraw_sc.alloc_item
	 */
	struct Ump_exchange_item_withdraw_sc_alloc_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_register_sc.has_info
	 */
	struct Ump_exchange_register_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_register_sc.get_info
	 */
	struct Ump_exchange_register_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_register_sc.alloc_info
	 */
	struct Ump_exchange_register_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_register_cancel_sc.has_item
	 */
	struct Ump_exchange_register_cancel_sc_has_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_register_cancel_sc.get_item
	 */
	struct Ump_exchange_register_cancel_sc_get_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_exchange_register_cancel_sc.alloc_item
	 */
	struct Ump_exchange_register_cancel_sc_alloc_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_cs.has_pos
	 */
	struct Ump_friend_teleport_cs_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_cs.get_pos
	 */
	struct Ump_friend_teleport_cs_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_cs.alloc_pos
	 */
	struct Ump_friend_teleport_cs_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_sc.has_use_item
	 */
	struct Ump_friend_teleport_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_sc.has_pos
	 */
	struct Ump_friend_teleport_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_sc.get_use_item
	 */
	struct Ump_friend_teleport_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_sc.get_pos
	 */
	struct Ump_friend_teleport_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_sc.alloc_use_item
	 */
	struct Ump_friend_teleport_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_friend_teleport_sc.alloc_pos
	 */
	struct Ump_friend_teleport_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_game_login_sc.has_character
	 */
	struct Ump_game_login_sc_has_character_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_game_login_sc.get_character
	 */
	struct Ump_game_login_sc_get_character_Params
	{
	public:
		struct Fmps_character                                      ReturnValue;                                             // 0x0000(0x0420)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_game_login_sc.alloc_character
	 */
	struct Ump_game_login_sc_alloc_character_Params
	{
	public:
		struct Fmps_character                                      ReturnValue;                                             // 0x0000(0x0420)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gameitem_update_sc.has_info
	 */
	struct Ump_gameitem_update_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gameitem_update_sc.get_info
	 */
	struct Ump_gameitem_update_sc_get_info_Params
	{
	public:
		struct Fmps_gameitem_update                                ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gameitem_update_sc.alloc_info
	 */
	struct Ump_gameitem_update_sc_alloc_info_Params
	{
	public:
		struct Fmps_gameitem_update                                ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_check_attribute_sc.has_object_list
	 */
	struct Ump_gm_check_attribute_sc_has_object_list_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_check_attribute_sc.get_object_list
	 */
	struct Ump_gm_check_attribute_sc_get_object_list_Params
	{
	public:
		struct Fmps_object_list                                    ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_check_attribute_sc.alloc_object_list
	 */
	struct Ump_gm_check_attribute_sc_alloc_object_list_Params
	{
	public:
		struct Fmps_object_list                                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_getitem_sc.has_info
	 */
	struct Ump_gm_getitem_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_getitem_sc.get_info
	 */
	struct Ump_gm_getitem_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_getitem_sc.alloc_info
	 */
	struct Ump_gm_getitem_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_levelup_cs.has_goods
	 */
	struct Ump_gm_levelup_cs_has_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_levelup_cs.get_goods
	 */
	struct Ump_gm_levelup_cs_get_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_levelup_cs.alloc_goods
	 */
	struct Ump_gm_levelup_cs_alloc_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_profesion_update_sc.has_info
	 */
	struct Ump_gm_profesion_update_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_profesion_update_sc.get_info
	 */
	struct Ump_gm_profesion_update_sc_get_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_profesion_update_sc.alloc_info
	 */
	struct Ump_gm_profesion_update_sc_alloc_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_quest_accept_sc.has_history
	 */
	struct Ump_gm_quest_accept_sc_has_history_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_quest_accept_sc.get_history
	 */
	struct Ump_gm_quest_accept_sc_get_history_Params
	{
	public:
		struct Fmps_quest_history                                  ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_quest_accept_sc.alloc_history
	 */
	struct Ump_gm_quest_accept_sc_alloc_history_Params
	{
	public:
		struct Fmps_quest_history                                  ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_reflection_add_sc.has_info
	 */
	struct Ump_gm_reflection_add_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_reflection_add_sc.get_info
	 */
	struct Ump_gm_reflection_add_sc_get_info_Params
	{
	public:
		struct Fmps_reflection                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_reflection_add_sc.alloc_info
	 */
	struct Ump_gm_reflection_add_sc_alloc_info_Params
	{
	public:
		struct Fmps_reflection                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_skill_expup_sc.has_skill
	 */
	struct Ump_gm_skill_expup_sc_has_skill_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_skill_expup_sc.get_skill
	 */
	struct Ump_gm_skill_expup_sc_get_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_skill_expup_sc.alloc_skill
	 */
	struct Ump_gm_skill_expup_sc_alloc_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_skillopen_sc.has_info
	 */
	struct Ump_gm_skillopen_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_skillopen_sc.get_info
	 */
	struct Ump_gm_skillopen_sc_get_info_Params
	{
	public:
		struct Fmps_skill_list                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_skillopen_sc.alloc_info
	 */
	struct Ump_gm_skillopen_sc_alloc_info_Params
	{
	public:
		struct Fmps_skill_list                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_spawn_monster_cs.has_pos
	 */
	struct Ump_gm_spawn_monster_cs_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_spawn_monster_cs.get_pos
	 */
	struct Ump_gm_spawn_monster_cs_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_spawn_monster_cs.alloc_pos
	 */
	struct Ump_gm_spawn_monster_cs_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_spawn_treasurebox_cs.has_pos
	 */
	struct Ump_gm_spawn_treasurebox_cs_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_spawn_treasurebox_cs.get_pos
	 */
	struct Ump_gm_spawn_treasurebox_cs_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_gm_spawn_treasurebox_cs.alloc_pos
	 */
	struct Ump_gm_spawn_treasurebox_cs_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_goods_update_sc.has_info
	 */
	struct Ump_goods_update_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_goods_update_sc.get_info
	 */
	struct Ump_goods_update_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_goods_update_sc.alloc_info
	 */
	struct Ump_goods_update_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guard_pass_buy_sc.has_update_goods
	 */
	struct Ump_guard_pass_buy_sc_has_update_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guard_pass_buy_sc.get_update_goods
	 */
	struct Ump_guard_pass_buy_sc_get_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guard_pass_buy_sc.alloc_update_goods
	 */
	struct Ump_guard_pass_buy_sc_alloc_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_add_exp_sc.has_use_item
	 */
	struct Ump_guild_add_exp_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_add_exp_sc.get_use_item
	 */
	struct Ump_guild_add_exp_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_add_exp_sc.alloc_use_item
	 */
	struct Ump_guild_add_exp_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_create_dungeon_sc.has_info
	 */
	struct Ump_guild_alert_create_dungeon_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_create_dungeon_sc.get_info
	 */
	struct Ump_guild_alert_create_dungeon_sc_get_info_Params
	{
	public:
		struct Fmps_guild_dungeon_info                             ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_create_dungeon_sc.alloc_info
	 */
	struct Ump_guild_alert_create_dungeon_sc_alloc_info_Params
	{
	public:
		struct Fmps_guild_dungeon_info                             ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_donation_sc.has_update_goods
	 */
	struct Ump_guild_alert_donation_sc_has_update_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_donation_sc.get_update_goods
	 */
	struct Ump_guild_alert_donation_sc_get_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_donation_sc.alloc_update_goods
	 */
	struct Ump_guild_alert_donation_sc_alloc_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_sc.has_new_member
	 */
	struct Ump_guild_alert_join_sc_has_new_member_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_sc.get_new_member
	 */
	struct Ump_guild_alert_join_sc_get_new_member_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_sc.alloc_new_member
	 */
	struct Ump_guild_alert_join_sc_alloc_new_member_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_sc.has_info
	 */
	struct Ump_guild_alert_join_request_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_sc.get_info
	 */
	struct Ump_guild_alert_join_request_sc_get_info_Params
	{
	public:
		struct Fmps_guild_request_member                           ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_sc.alloc_info
	 */
	struct Ump_guild_alert_join_request_sc_alloc_info_Params
	{
	public:
		struct Fmps_guild_request_member                           ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_result_sc.has_my_info
	 */
	struct Ump_guild_alert_join_request_result_sc_has_my_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_result_sc.has_guild
	 */
	struct Ump_guild_alert_join_request_result_sc_has_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_result_sc.get_my_info
	 */
	struct Ump_guild_alert_join_request_result_sc_get_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_result_sc.get_guild
	 */
	struct Ump_guild_alert_join_request_result_sc_get_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_result_sc.alloc_my_info
	 */
	struct Ump_guild_alert_join_request_result_sc_alloc_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_join_request_result_sc.alloc_guild
	 */
	struct Ump_guild_alert_join_request_result_sc_alloc_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_register_master_order_quest_sc.has_quest
	 */
	struct Ump_guild_alert_register_master_order_quest_sc_has_quest_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_register_master_order_quest_sc.get_quest
	 */
	struct Ump_guild_alert_register_master_order_quest_sc_get_quest_Params
	{
	public:
		struct Fmps_guild_master_order_quest                       ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_register_master_order_quest_sc.alloc_quest
	 */
	struct Ump_guild_alert_register_master_order_quest_sc_alloc_quest_Params
	{
	public:
		struct Fmps_guild_master_order_quest                       ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_start_war_sc.has_war
	 */
	struct Ump_guild_alert_start_war_sc_has_war_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_start_war_sc.get_war
	 */
	struct Ump_guild_alert_start_war_sc_get_war_Params
	{
	public:
		struct Fmps_guild_war                                      ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_alert_start_war_sc.alloc_war
	 */
	struct Ump_guild_alert_start_war_sc_alloc_war_Params
	{
	public:
		struct Fmps_guild_war                                      ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_buff_buy_sc.has_info
	 */
	struct Ump_guild_buff_buy_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_buff_buy_sc.get_info
	 */
	struct Ump_guild_buff_buy_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_buff_buy_sc.alloc_info
	 */
	struct Ump_guild_buff_buy_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_change_join_condition_sc.has_guild
	 */
	struct Ump_guild_change_join_condition_sc_has_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_change_join_condition_sc.get_guild
	 */
	struct Ump_guild_change_join_condition_sc_get_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_change_join_condition_sc.alloc_guild
	 */
	struct Ump_guild_change_join_condition_sc_alloc_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.has_use_item
	 */
	struct Ump_guild_create_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.has_my_info
	 */
	struct Ump_guild_create_sc_has_my_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.has_guild
	 */
	struct Ump_guild_create_sc_has_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.get_use_item
	 */
	struct Ump_guild_create_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.get_my_info
	 */
	struct Ump_guild_create_sc_get_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.get_guild
	 */
	struct Ump_guild_create_sc_get_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.alloc_use_item
	 */
	struct Ump_guild_create_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.alloc_my_info
	 */
	struct Ump_guild_create_sc_alloc_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_create_sc.alloc_guild
	 */
	struct Ump_guild_create_sc_alloc_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_donation_sc.has_update_golds
	 */
	struct Ump_guild_donation_sc_has_update_golds_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_donation_sc.get_update_golds
	 */
	struct Ump_guild_donation_sc_get_update_golds_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_donation_sc.alloc_update_golds
	 */
	struct Ump_guild_donation_sc_alloc_update_golds_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.has_my_info
	 */
	struct Ump_guild_info_sc_has_my_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.has_guild
	 */
	struct Ump_guild_info_sc_has_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.has_dungeon_info
	 */
	struct Ump_guild_info_sc_has_dungeon_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.get_my_info
	 */
	struct Ump_guild_info_sc_get_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.get_guild
	 */
	struct Ump_guild_info_sc_get_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.get_dungeon_info
	 */
	struct Ump_guild_info_sc_get_dungeon_info_Params
	{
	public:
		struct Fmps_guild_dungeon_info                             ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.alloc_my_info
	 */
	struct Ump_guild_info_sc_alloc_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.alloc_guild
	 */
	struct Ump_guild_info_sc_alloc_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_info_sc.alloc_dungeon_info
	 */
	struct Ump_guild_info_sc_alloc_dungeon_info_Params
	{
	public:
		struct Fmps_guild_dungeon_info                             ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_invite_accept_sc.has_my_info
	 */
	struct Ump_guild_invite_accept_sc_has_my_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_invite_accept_sc.has_guild
	 */
	struct Ump_guild_invite_accept_sc_has_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_invite_accept_sc.get_my_info
	 */
	struct Ump_guild_invite_accept_sc_get_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_invite_accept_sc.get_guild
	 */
	struct Ump_guild_invite_accept_sc_get_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_invite_accept_sc.alloc_my_info
	 */
	struct Ump_guild_invite_accept_sc_alloc_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_invite_accept_sc.alloc_guild
	 */
	struct Ump_guild_invite_accept_sc_alloc_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_item_donation_sc.has_update_user_item
	 */
	struct Ump_guild_item_donation_sc_has_update_user_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_item_donation_sc.has_update_storage_item
	 */
	struct Ump_guild_item_donation_sc_has_update_storage_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_item_donation_sc.get_update_user_item
	 */
	struct Ump_guild_item_donation_sc_get_update_user_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_item_donation_sc.get_update_storage_item
	 */
	struct Ump_guild_item_donation_sc_get_update_storage_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_item_donation_sc.alloc_update_user_item
	 */
	struct Ump_guild_item_donation_sc_alloc_update_user_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_item_donation_sc.alloc_update_storage_item
	 */
	struct Ump_guild_item_donation_sc_alloc_update_storage_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_join_request_sc.has_my_info
	 */
	struct Ump_guild_join_request_sc_has_my_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_join_request_sc.has_guild
	 */
	struct Ump_guild_join_request_sc_has_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_join_request_sc.get_my_info
	 */
	struct Ump_guild_join_request_sc_get_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_join_request_sc.get_guild
	 */
	struct Ump_guild_join_request_sc_get_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_join_request_sc.alloc_my_info
	 */
	struct Ump_guild_join_request_sc_alloc_my_info_Params
	{
	public:
		struct Fmps_guild_member                                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_join_request_sc.alloc_guild
	 */
	struct Ump_guild_join_request_sc_alloc_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_register_master_order_quest_sc.has_quest
	 */
	struct Ump_guild_register_master_order_quest_sc_has_quest_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_register_master_order_quest_sc.get_quest
	 */
	struct Ump_guild_register_master_order_quest_sc_get_quest_Params
	{
	public:
		struct Fmps_guild_master_order_quest                       ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_register_master_order_quest_sc.alloc_quest
	 */
	struct Ump_guild_register_master_order_quest_sc_alloc_quest_Params
	{
	public:
		struct Fmps_guild_master_order_quest                       ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_search_sc.has_guild
	 */
	struct Ump_guild_search_sc_has_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_search_sc.get_guild
	 */
	struct Ump_guild_search_sc_get_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_search_sc.alloc_guild
	 */
	struct Ump_guild_search_sc_alloc_guild_Params
	{
	public:
		struct Fmps_guild                                          ReturnValue;                                             // 0x0000(0x0160)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_shipwar_play_notify_sc.has_info
	 */
	struct Ump_guild_shipwar_play_notify_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_shipwar_play_notify_sc.get_info
	 */
	struct Ump_guild_shipwar_play_notify_sc_get_info_Params
	{
	public:
		struct Fmps_guild_shipwar_situation                        ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_shipwar_play_notify_sc.alloc_info
	 */
	struct Ump_guild_shipwar_play_notify_sc_alloc_info_Params
	{
	public:
		struct Fmps_guild_shipwar_situation                        ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_shipwar_situation_sc.has_info
	 */
	struct Ump_guild_shipwar_situation_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_shipwar_situation_sc.get_info
	 */
	struct Ump_guild_shipwar_situation_sc_get_info_Params
	{
	public:
		struct Fmps_guild_shipwar_situation                        ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_shipwar_situation_sc.alloc_info
	 */
	struct Ump_guild_shipwar_situation_sc_alloc_info_Params
	{
	public:
		struct Fmps_guild_shipwar_situation                        ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_start_war_sc.has_war
	 */
	struct Ump_guild_start_war_sc_has_war_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_start_war_sc.get_war
	 */
	struct Ump_guild_start_war_sc_get_war_Params
	{
	public:
		struct Fmps_guild_war                                      ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_start_war_sc.alloc_war
	 */
	struct Ump_guild_start_war_sc_alloc_war_Params
	{
	public:
		struct Fmps_guild_war                                      ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_alert_request_get_item_sc.has_request
	 */
	struct Ump_guild_storage_share_alert_request_get_item_sc_has_request_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_alert_request_get_item_sc.get_request
	 */
	struct Ump_guild_storage_share_alert_request_get_item_sc_get_request_Params
	{
	public:
		struct Fmps_guild_storage_share_request_get_item           ReturnValue;                                             // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_alert_request_get_item_sc.alloc_request
	 */
	struct Ump_guild_storage_share_alert_request_get_item_sc_alloc_request_Params
	{
	public:
		struct Fmps_guild_storage_share_request_get_item           ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_insert_item_sc.has_update_storage_item
	 */
	struct Ump_guild_storage_share_insert_item_sc_has_update_storage_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_insert_item_sc.get_update_storage_item
	 */
	struct Ump_guild_storage_share_insert_item_sc_get_update_storage_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_insert_item_sc.alloc_update_storage_item
	 */
	struct Ump_guild_storage_share_insert_item_sc_alloc_update_storage_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_master_get_item_sc.has_update_user_item
	 */
	struct Ump_guild_storage_share_master_get_item_sc_has_update_user_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_master_get_item_sc.has_update_storage_item
	 */
	struct Ump_guild_storage_share_master_get_item_sc_has_update_storage_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_master_get_item_sc.get_update_user_item
	 */
	struct Ump_guild_storage_share_master_get_item_sc_get_update_user_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_master_get_item_sc.get_update_storage_item
	 */
	struct Ump_guild_storage_share_master_get_item_sc_get_update_storage_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_master_get_item_sc.alloc_update_user_item
	 */
	struct Ump_guild_storage_share_master_get_item_sc_alloc_update_user_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_share_master_get_item_sc.alloc_update_storage_item
	 */
	struct Ump_guild_storage_share_master_get_item_sc_alloc_update_storage_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_get_item_sc.has_update_user_item
	 */
	struct Ump_guild_storage_supply_get_item_sc_has_update_user_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_get_item_sc.has_update_storage_item
	 */
	struct Ump_guild_storage_supply_get_item_sc_has_update_storage_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_get_item_sc.get_update_user_item
	 */
	struct Ump_guild_storage_supply_get_item_sc_get_update_user_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_get_item_sc.get_update_storage_item
	 */
	struct Ump_guild_storage_supply_get_item_sc_get_update_storage_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_get_item_sc.alloc_update_user_item
	 */
	struct Ump_guild_storage_supply_get_item_sc_alloc_update_user_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_get_item_sc.alloc_update_storage_item
	 */
	struct Ump_guild_storage_supply_get_item_sc_alloc_update_storage_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_insert_item_sc.has_update_storage_item
	 */
	struct Ump_guild_storage_supply_insert_item_sc_has_update_storage_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_insert_item_sc.get_update_storage_item
	 */
	struct Ump_guild_storage_supply_insert_item_sc_get_update_storage_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_supply_insert_item_sc.alloc_update_storage_item
	 */
	struct Ump_guild_storage_supply_insert_item_sc_alloc_update_storage_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_auction_finish_sc.has_auction
	 */
	struct Ump_guild_storage_treasure_alert_auction_finish_sc_has_auction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_auction_finish_sc.get_auction
	 */
	struct Ump_guild_storage_treasure_alert_auction_finish_sc_get_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_auction_finish_sc.alloc_auction
	 */
	struct Ump_guild_storage_treasure_alert_auction_finish_sc_alloc_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_lost_top_request_sc.has_return_guild_point
	 */
	struct Ump_guild_storage_treasure_alert_lost_top_request_sc_has_return_guild_point_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_lost_top_request_sc.has_auction
	 */
	struct Ump_guild_storage_treasure_alert_lost_top_request_sc_has_auction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_lost_top_request_sc.get_return_guild_point
	 */
	struct Ump_guild_storage_treasure_alert_lost_top_request_sc_get_return_guild_point_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_lost_top_request_sc.get_auction
	 */
	struct Ump_guild_storage_treasure_alert_lost_top_request_sc_get_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_lost_top_request_sc.alloc_return_guild_point
	 */
	struct Ump_guild_storage_treasure_alert_lost_top_request_sc_alloc_return_guild_point_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_alert_lost_top_request_sc.alloc_auction
	 */
	struct Ump_guild_storage_treasure_alert_lost_top_request_sc_alloc_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_confirm_auction_sc.has_auction
	 */
	struct Ump_guild_storage_treasure_confirm_auction_sc_has_auction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_confirm_auction_sc.get_auction
	 */
	struct Ump_guild_storage_treasure_confirm_auction_sc_get_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_confirm_auction_sc.alloc_auction
	 */
	struct Ump_guild_storage_treasure_confirm_auction_sc_alloc_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_get_auction_sc.has_auction
	 */
	struct Ump_guild_storage_treasure_get_auction_sc_has_auction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_get_auction_sc.get_auction
	 */
	struct Ump_guild_storage_treasure_get_auction_sc_get_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_get_auction_sc.alloc_auction
	 */
	struct Ump_guild_storage_treasure_get_auction_sc_alloc_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_request_sc.has_update_guild_point
	 */
	struct Ump_guild_storage_treasure_request_sc_has_update_guild_point_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_request_sc.has_auction
	 */
	struct Ump_guild_storage_treasure_request_sc_has_auction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_request_sc.get_update_guild_point
	 */
	struct Ump_guild_storage_treasure_request_sc_get_update_guild_point_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_request_sc.get_auction
	 */
	struct Ump_guild_storage_treasure_request_sc_get_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_request_sc.alloc_update_guild_point
	 */
	struct Ump_guild_storage_treasure_request_sc_alloc_update_guild_point_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_guild_storage_treasure_request_sc.alloc_auction
	 */
	struct Ump_guild_storage_treasure_request_sc_alloc_auction_Params
	{
	public:
		struct Fmps_guild_storage_treasure_auction                 ReturnValue;                                             // 0x0000(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_info_sc.has_info
	 */
	struct Ump_illusion_dungeon_info_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_info_sc.get_info
	 */
	struct Ump_illusion_dungeon_info_sc_get_info_Params
	{
	public:
		struct Fmps_illusion_dungeon                               ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_info_sc.alloc_info
	 */
	struct Ump_illusion_dungeon_info_sc_alloc_info_Params
	{
	public:
		struct Fmps_illusion_dungeon                               ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_info_get_sc.has_info
	 */
	struct Ump_illusion_dungeon_info_get_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_info_get_sc.get_info
	 */
	struct Ump_illusion_dungeon_info_get_sc_get_info_Params
	{
	public:
		struct Fmps_illusion_dungeon                               ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_info_get_sc.alloc_info
	 */
	struct Ump_illusion_dungeon_info_get_sc_alloc_info_Params
	{
	public:
		struct Fmps_illusion_dungeon                               ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_time_charge_sc.has_item_info
	 */
	struct Ump_illusion_dungeon_time_charge_sc_has_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_time_charge_sc.has_info
	 */
	struct Ump_illusion_dungeon_time_charge_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_time_charge_sc.get_item_info
	 */
	struct Ump_illusion_dungeon_time_charge_sc_get_item_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_time_charge_sc.get_info
	 */
	struct Ump_illusion_dungeon_time_charge_sc_get_info_Params
	{
	public:
		struct Fmps_illusion_dungeon                               ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_time_charge_sc.alloc_item_info
	 */
	struct Ump_illusion_dungeon_time_charge_sc_alloc_item_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_illusion_dungeon_time_charge_sc.alloc_info
	 */
	struct Ump_illusion_dungeon_time_charge_sc_alloc_info_Params
	{
	public:
		struct Fmps_illusion_dungeon                               ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_enter_sc.has_pos
	 */
	struct Ump_indun_enter_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_enter_sc.get_pos
	 */
	struct Ump_indun_enter_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_enter_sc.alloc_pos
	 */
	struct Ump_indun_enter_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_finish_sc.has_result_score
	 */
	struct Ump_indun_finish_sc_has_result_score_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_finish_sc.get_result_score
	 */
	struct Ump_indun_finish_sc_get_result_score_Params
	{
	public:
		struct Fmps_siege_result_score                             ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_finish_sc.alloc_result_score
	 */
	struct Ump_indun_finish_sc_alloc_result_score_Params
	{
	public:
		struct Fmps_siege_result_score                             ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_reward_sc.has_reward
	 */
	struct Ump_indun_reward_sc_has_reward_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_reward_sc.get_reward
	 */
	struct Ump_indun_reward_sc_get_reward_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_indun_reward_sc.alloc_reward
	 */
	struct Ump_indun_reward_sc_alloc_reward_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_inven_expansion_sc.has_info
	 */
	struct Ump_inven_expansion_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_inven_expansion_sc.get_info
	 */
	struct Ump_inven_expansion_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_inven_expansion_sc.alloc_info
	 */
	struct Ump_inven_expansion_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_inven_weight_expansion_sc.has_info
	 */
	struct Ump_inven_weight_expansion_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_inven_weight_expansion_sc.get_info
	 */
	struct Ump_inven_weight_expansion_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_inven_weight_expansion_sc.alloc_info
	 */
	struct Ump_inven_weight_expansion_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.has_profesion_info
	 */
	struct Ump_item_acc_reinforce_sc_has_profesion_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.has_item_option
	 */
	struct Ump_item_acc_reinforce_sc_has_item_option_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.has_info
	 */
	struct Ump_item_acc_reinforce_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.get_profesion_info
	 */
	struct Ump_item_acc_reinforce_sc_get_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.get_item_option
	 */
	struct Ump_item_acc_reinforce_sc_get_item_option_Params
	{
	public:
		struct Fmps_item_option_update                             ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.get_info
	 */
	struct Ump_item_acc_reinforce_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.alloc_profesion_info
	 */
	struct Ump_item_acc_reinforce_sc_alloc_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.alloc_item_option
	 */
	struct Ump_item_acc_reinforce_sc_alloc_item_option_Params
	{
	public:
		struct Fmps_item_option_update                             ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_acc_reinforce_sc.alloc_info
	 */
	struct Ump_item_acc_reinforce_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_buy_sc.has_info
	 */
	struct Ump_item_buy_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_buy_sc.get_info
	 */
	struct Ump_item_buy_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_buy_sc.alloc_info
	 */
	struct Ump_item_buy_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_cs.has_infolist
	 */
	struct Ump_item_decompose_cs_has_infolist_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_cs.has_info
	 */
	struct Ump_item_decompose_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_cs.get_infolist
	 */
	struct Ump_item_decompose_cs_get_infolist_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_cs.get_info
	 */
	struct Ump_item_decompose_cs_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_cs.alloc_infolist
	 */
	struct Ump_item_decompose_cs_alloc_infolist_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_cs.alloc_info
	 */
	struct Ump_item_decompose_cs_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_sc.has_info
	 */
	struct Ump_item_decompose_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_sc.get_info
	 */
	struct Ump_item_decompose_sc_get_info_Params
	{
	public:
		struct Fmps_item_update                                    ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_decompose_sc.alloc_info
	 */
	struct Ump_item_decompose_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_update                                    ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_destroy_cs.has_info
	 */
	struct Ump_item_destroy_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_destroy_cs.get_info
	 */
	struct Ump_item_destroy_cs_get_info_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_destroy_cs.alloc_info
	 */
	struct Ump_item_destroy_cs_alloc_info_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_destroy_sc.has_info
	 */
	struct Ump_item_destroy_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_destroy_sc.get_info
	 */
	struct Ump_item_destroy_sc_get_info_Params
	{
	public:
		struct Fmps_item_update                                    ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_destroy_sc.alloc_info
	 */
	struct Ump_item_destroy_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_update                                    ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.has_profesion_info
	 */
	struct Ump_item_enchant_option_change_sc_has_profesion_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.has_option_list
	 */
	struct Ump_item_enchant_option_change_sc_has_option_list_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.has_info
	 */
	struct Ump_item_enchant_option_change_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.get_profesion_info
	 */
	struct Ump_item_enchant_option_change_sc_get_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.get_option_list
	 */
	struct Ump_item_enchant_option_change_sc_get_option_list_Params
	{
	public:
		struct Fmps_enchant_options                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.get_info
	 */
	struct Ump_item_enchant_option_change_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.alloc_profesion_info
	 */
	struct Ump_item_enchant_option_change_sc_alloc_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.alloc_option_list
	 */
	struct Ump_item_enchant_option_change_sc_alloc_option_list_Params
	{
	public:
		struct Fmps_enchant_options                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_change_sc.alloc_info
	 */
	struct Ump_item_enchant_option_change_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.has_profesion_info
	 */
	struct Ump_item_enchant_option_make_sc_has_profesion_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.has_option_list
	 */
	struct Ump_item_enchant_option_make_sc_has_option_list_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.has_info
	 */
	struct Ump_item_enchant_option_make_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.get_profesion_info
	 */
	struct Ump_item_enchant_option_make_sc_get_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.get_option_list
	 */
	struct Ump_item_enchant_option_make_sc_get_option_list_Params
	{
	public:
		struct Fmps_enchant_option_list                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.get_info
	 */
	struct Ump_item_enchant_option_make_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.alloc_profesion_info
	 */
	struct Ump_item_enchant_option_make_sc_alloc_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.alloc_option_list
	 */
	struct Ump_item_enchant_option_make_sc_alloc_option_list_Params
	{
	public:
		struct Fmps_enchant_option_list                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_make_sc.alloc_info
	 */
	struct Ump_item_enchant_option_make_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_select_sc.has_info
	 */
	struct Ump_item_enchant_option_select_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_select_sc.get_info
	 */
	struct Ump_item_enchant_option_select_sc_get_info_Params
	{
	public:
		struct Fmps_item_option_update                             ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_enchant_option_select_sc.alloc_info
	 */
	struct Ump_item_enchant_option_select_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_option_update                             ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_equip_cs.has_info
	 */
	struct Ump_item_equip_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_equip_cs.get_info
	 */
	struct Ump_item_equip_cs_get_info_Params
	{
	public:
		struct Fmps_equip_info_list                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_equip_cs.alloc_info
	 */
	struct Ump_item_equip_cs_alloc_info_Params
	{
	public:
		struct Fmps_equip_info_list                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_equip_sc.has_info
	 */
	struct Ump_item_equip_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_equip_sc.get_info
	 */
	struct Ump_item_equip_sc_get_info_Params
	{
	public:
		struct Fmps_equip_info_list                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_equip_sc.alloc_info
	 */
	struct Ump_item_equip_sc_alloc_info_Params
	{
	public:
		struct Fmps_equip_info_list                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_cs.has_info
	 */
	struct Ump_item_luck_reinforce_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_cs.get_info
	 */
	struct Ump_item_luck_reinforce_cs_get_info_Params
	{
	public:
		struct Fmps_item_iuid                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_cs.alloc_info
	 */
	struct Ump_item_luck_reinforce_cs_alloc_info_Params
	{
	public:
		struct Fmps_item_iuid                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.has_profesion_info
	 */
	struct Ump_item_luck_reinforce_sc_has_profesion_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.has_item_option
	 */
	struct Ump_item_luck_reinforce_sc_has_item_option_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.has_info
	 */
	struct Ump_item_luck_reinforce_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.get_profesion_info
	 */
	struct Ump_item_luck_reinforce_sc_get_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.get_item_option
	 */
	struct Ump_item_luck_reinforce_sc_get_item_option_Params
	{
	public:
		struct Fmps_item_option_update                             ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.get_info
	 */
	struct Ump_item_luck_reinforce_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.alloc_profesion_info
	 */
	struct Ump_item_luck_reinforce_sc_alloc_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.alloc_item_option
	 */
	struct Ump_item_luck_reinforce_sc_alloc_item_option_Params
	{
	public:
		struct Fmps_item_option_update                             ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_luck_reinforce_sc.alloc_info
	 */
	struct Ump_item_luck_reinforce_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_make_sc.has_info
	 */
	struct Ump_item_make_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_make_sc.get_info
	 */
	struct Ump_item_make_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_make_sc.alloc_info
	 */
	struct Ump_item_make_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_cs.has_info
	 */
	struct Ump_item_reinforce_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_cs.get_info
	 */
	struct Ump_item_reinforce_cs_get_info_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_cs.alloc_info
	 */
	struct Ump_item_reinforce_cs_alloc_info_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.has_profesion_info
	 */
	struct Ump_item_reinforce_sc_has_profesion_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.has_item_option
	 */
	struct Ump_item_reinforce_sc_has_item_option_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.has_info
	 */
	struct Ump_item_reinforce_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.get_profesion_info
	 */
	struct Ump_item_reinforce_sc_get_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.get_item_option
	 */
	struct Ump_item_reinforce_sc_get_item_option_Params
	{
	public:
		struct Fmps_item_option_update                             ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.get_info
	 */
	struct Ump_item_reinforce_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.alloc_profesion_info
	 */
	struct Ump_item_reinforce_sc_alloc_profesion_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.alloc_item_option
	 */
	struct Ump_item_reinforce_sc_alloc_item_option_Params
	{
	public:
		struct Fmps_item_option_update                             ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_reinforce_sc.alloc_info
	 */
	struct Ump_item_reinforce_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_repair_sc.has_info
	 */
	struct Ump_item_repair_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_repair_sc.get_info
	 */
	struct Ump_item_repair_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_repair_sc.alloc_info
	 */
	struct Ump_item_repair_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_sell_cs.has_info
	 */
	struct Ump_item_sell_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_sell_cs.get_info
	 */
	struct Ump_item_sell_cs_get_info_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_sell_cs.alloc_info
	 */
	struct Ump_item_sell_cs_alloc_info_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_sell_sc.has_info
	 */
	struct Ump_item_sell_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_sell_sc.get_info
	 */
	struct Ump_item_sell_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_sell_sc.alloc_info
	 */
	struct Ump_item_sell_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_use_sc.has_info
	 */
	struct Ump_item_use_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_use_sc.get_info
	 */
	struct Ump_item_use_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_item_use_sc.alloc_info
	 */
	struct Ump_item_use_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_leave_story_dungeon_sc.has_pos
	 */
	struct Ump_leave_story_dungeon_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_leave_story_dungeon_sc.get_pos
	 */
	struct Ump_leave_story_dungeon_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_leave_story_dungeon_sc.alloc_pos
	 */
	struct Ump_leave_story_dungeon_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_login_gamelogin_sc.has_server_info
	 */
	struct Ump_login_gamelogin_sc_has_server_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_login_gamelogin_sc.get_server_info
	 */
	struct Ump_login_gamelogin_sc_get_server_info_Params
	{
	public:
		struct Fmps_server_info                                    ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_login_gamelogin_sc.alloc_server_info
	 */
	struct Ump_login_gamelogin_sc_alloc_server_info_Params
	{
	public:
		struct Fmps_server_info                                    ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_bless_buff_use_sc.has_bless_buff
	 */
	struct Ump_lord_bless_buff_use_sc_has_bless_buff_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_bless_buff_use_sc.get_bless_buff
	 */
	struct Ump_lord_bless_buff_use_sc_get_bless_buff_Params
	{
	public:
		struct Fmps_lord_bless_buff                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_bless_buff_use_sc.alloc_bless_buff
	 */
	struct Ump_lord_bless_buff_use_sc_alloc_bless_buff_Params
	{
	public:
		struct Fmps_lord_bless_buff                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_bless_info_sc.has_bless_info
	 */
	struct Ump_lord_bless_info_sc_has_bless_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_bless_info_sc.get_bless_info
	 */
	struct Ump_lord_bless_info_sc_get_bless_info_Params
	{
	public:
		struct Fmps_lord_bless_info                                ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_bless_info_sc.alloc_bless_info
	 */
	struct Ump_lord_bless_info_sc_alloc_bless_info_Params
	{
	public:
		struct Fmps_lord_bless_info                                ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_worship_sc.has_info
	 */
	struct Ump_lord_worship_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_worship_sc.get_info
	 */
	struct Ump_lord_worship_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_lord_worship_sc.alloc_info
	 */
	struct Ump_lord_worship_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mail_receive_item_sc.has_info
	 */
	struct Ump_mail_receive_item_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mail_receive_item_sc.get_info
	 */
	struct Ump_mail_receive_item_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mail_receive_item_sc.alloc_info
	 */
	struct Ump_mail_receive_item_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mail_received_cs.has_mail
	 */
	struct Ump_mail_received_cs_has_mail_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mail_received_cs.get_mail
	 */
	struct Ump_mail_received_cs_get_mail_Params
	{
	public:
		struct Fmps_received_mail                                  ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mail_received_cs.alloc_mail
	 */
	struct Ump_mail_received_cs_alloc_mail_Params
	{
	public:
		struct Fmps_received_mail                                  ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_add_sc.has_node_info
	 */
	struct Ump_mandala_node_add_sc_has_node_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_add_sc.has_item_add
	 */
	struct Ump_mandala_node_add_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_add_sc.get_node_info
	 */
	struct Ump_mandala_node_add_sc_get_node_info_Params
	{
	public:
		struct Fmps_mandala_node_info                              ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_add_sc.get_item_add
	 */
	struct Ump_mandala_node_add_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_add_sc.alloc_node_info
	 */
	struct Ump_mandala_node_add_sc_alloc_node_info_Params
	{
	public:
		struct Fmps_mandala_node_info                              ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_add_sc.alloc_item_add
	 */
	struct Ump_mandala_node_add_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_equip_sc.has_node_info
	 */
	struct Ump_mandala_node_equip_sc_has_node_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_equip_sc.has_item_add
	 */
	struct Ump_mandala_node_equip_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_equip_sc.get_node_info
	 */
	struct Ump_mandala_node_equip_sc_get_node_info_Params
	{
	public:
		struct Fmps_mandala_node_info                              ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_equip_sc.get_item_add
	 */
	struct Ump_mandala_node_equip_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_equip_sc.alloc_node_info
	 */
	struct Ump_mandala_node_equip_sc_alloc_node_info_Params
	{
	public:
		struct Fmps_mandala_node_info                              ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_equip_sc.alloc_item_add
	 */
	struct Ump_mandala_node_equip_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_levelup_sc.has_node_info
	 */
	struct Ump_mandala_node_levelup_sc_has_node_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_levelup_sc.has_item_add
	 */
	struct Ump_mandala_node_levelup_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_levelup_sc.get_node_info
	 */
	struct Ump_mandala_node_levelup_sc_get_node_info_Params
	{
	public:
		struct Fmps_mandala_node_info                              ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_levelup_sc.get_item_add
	 */
	struct Ump_mandala_node_levelup_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_levelup_sc.alloc_node_info
	 */
	struct Ump_mandala_node_levelup_sc_alloc_node_info_Params
	{
	public:
		struct Fmps_mandala_node_info                              ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_node_levelup_sc.alloc_item_add
	 */
	struct Ump_mandala_node_levelup_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_reset_sc.has_item_add
	 */
	struct Ump_mandala_reset_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_reset_sc.get_item_add
	 */
	struct Ump_mandala_reset_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_reset_sc.alloc_item_add
	 */
	struct Ump_mandala_reset_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_rotation_sc.has_item_add
	 */
	struct Ump_mandala_rotation_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_rotation_sc.get_item_add
	 */
	struct Ump_mandala_rotation_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_rotation_sc.alloc_item_add
	 */
	struct Ump_mandala_rotation_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_stone_upgrade_sc.has_node_info
	 */
	struct Ump_mandala_stone_upgrade_sc_has_node_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_stone_upgrade_sc.has_item_add
	 */
	struct Ump_mandala_stone_upgrade_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_stone_upgrade_sc.get_node_info
	 */
	struct Ump_mandala_stone_upgrade_sc_get_node_info_Params
	{
	public:
		struct Fmps_mandala_node_info                              ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_stone_upgrade_sc.get_item_add
	 */
	struct Ump_mandala_stone_upgrade_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_stone_upgrade_sc.alloc_node_info
	 */
	struct Ump_mandala_stone_upgrade_sc_alloc_node_info_Params
	{
	public:
		struct Fmps_mandala_node_info                              ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mandala_stone_upgrade_sc.alloc_item_add
	 */
	struct Ump_mandala_stone_upgrade_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_map_discovery_update_cs.has_current_pos
	 */
	struct Ump_map_discovery_update_cs_has_current_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_map_discovery_update_cs.get_current_pos
	 */
	struct Ump_map_discovery_update_cs_get_current_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_map_discovery_update_cs.alloc_current_pos
	 */
	struct Ump_map_discovery_update_cs_alloc_current_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_map_discovery_update_sc.has_area_info
	 */
	struct Ump_map_discovery_update_sc_has_area_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_map_discovery_update_sc.get_area_info
	 */
	struct Ump_map_discovery_update_sc_get_area_info_Params
	{
	public:
		struct Fmps_map_discovery                                  ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_map_discovery_update_sc.alloc_area_info
	 */
	struct Ump_map_discovery_update_sc_alloc_area_info_Params
	{
	public:
		struct Fmps_map_discovery                                  ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_cs.has_buff_info
	 */
	struct Ump_mentor_buff_cs_has_buff_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_cs.get_buff_info
	 */
	struct Ump_mentor_buff_cs_get_buff_info_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_cs.alloc_buff_info
	 */
	struct Ump_mentor_buff_cs_alloc_buff_info_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_sc.has_buff_info
	 */
	struct Ump_mentor_buff_sc_has_buff_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_sc.get_buff_info
	 */
	struct Ump_mentor_buff_sc_get_buff_info_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_sc.alloc_buff_info
	 */
	struct Ump_mentor_buff_sc_alloc_buff_info_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_buy_sc.has_update_goods
	 */
	struct Ump_mentor_buff_buy_sc_has_update_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_buy_sc.has_buff_info
	 */
	struct Ump_mentor_buff_buy_sc_has_buff_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_buy_sc.get_update_goods
	 */
	struct Ump_mentor_buff_buy_sc_get_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_buy_sc.get_buff_info
	 */
	struct Ump_mentor_buff_buy_sc_get_buff_info_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_buy_sc.alloc_update_goods
	 */
	struct Ump_mentor_buff_buy_sc_alloc_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_mentor_buff_buy_sc.alloc_buff_info
	 */
	struct Ump_mentor_buff_buy_sc_alloc_buff_info_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.has_meridians
	 */
	struct Ump_meridians_levelup_sc_has_meridians_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.has_learn_skill
	 */
	struct Ump_meridians_levelup_sc_has_learn_skill_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.has_info
	 */
	struct Ump_meridians_levelup_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.get_meridians
	 */
	struct Ump_meridians_levelup_sc_get_meridians_Params
	{
	public:
		struct Fmps_meridians                                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.get_learn_skill
	 */
	struct Ump_meridians_levelup_sc_get_learn_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.get_info
	 */
	struct Ump_meridians_levelup_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.alloc_meridians
	 */
	struct Ump_meridians_levelup_sc_alloc_meridians_Params
	{
	public:
		struct Fmps_meridians                                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.alloc_learn_skill
	 */
	struct Ump_meridians_levelup_sc_alloc_learn_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_meridians_levelup_sc.alloc_info
	 */
	struct Ump_meridians_levelup_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_npc_intimacy_reward_sc.has_reward_info
	 */
	struct Ump_npc_intimacy_reward_sc_has_reward_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_npc_intimacy_reward_sc.has_item_add
	 */
	struct Ump_npc_intimacy_reward_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_npc_intimacy_reward_sc.get_reward_info
	 */
	struct Ump_npc_intimacy_reward_sc_get_reward_info_Params
	{
	public:
		struct Fmps_reward_info                                    ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_npc_intimacy_reward_sc.get_item_add
	 */
	struct Ump_npc_intimacy_reward_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_npc_intimacy_reward_sc.alloc_reward_info
	 */
	struct Ump_npc_intimacy_reward_sc_alloc_reward_info_Params
	{
	public:
		struct Fmps_reward_info                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_npc_intimacy_reward_sc.alloc_item_add
	 */
	struct Ump_npc_intimacy_reward_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_create_cs.has_info
	 */
	struct Ump_party_create_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_create_cs.get_info
	 */
	struct Ump_party_create_cs_get_info_Params
	{
	public:
		struct Fmps_party_base                                     ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_create_cs.alloc_info
	 */
	struct Ump_party_create_cs_alloc_info_Params
	{
	public:
		struct Fmps_party_base                                     ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_create_sc.has_info
	 */
	struct Ump_party_create_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_create_sc.get_info
	 */
	struct Ump_party_create_sc_get_info_Params
	{
	public:
		struct Fmps_party_info                                     ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_create_sc.alloc_info
	 */
	struct Ump_party_create_sc_alloc_info_Params
	{
	public:
		struct Fmps_party_info                                     ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_enter_agree_sc.has_member
	 */
	struct Ump_party_enter_agree_sc_has_member_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_enter_agree_sc.get_member
	 */
	struct Ump_party_enter_agree_sc_get_member_Params
	{
	public:
		struct Fmps_party_member                                   ReturnValue;                                             // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_enter_agree_sc.alloc_member
	 */
	struct Ump_party_enter_agree_sc_alloc_member_Params
	{
	public:
		struct Fmps_party_member                                   ReturnValue;                                             // 0x0000(0x0098)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_info_sc.has_info
	 */
	struct Ump_party_info_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_info_sc.get_info
	 */
	struct Ump_party_info_sc_get_info_Params
	{
	public:
		struct Fmps_party_info                                     ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_info_sc.alloc_info
	 */
	struct Ump_party_info_sc_alloc_info_Params
	{
	public:
		struct Fmps_party_info                                     ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_invite_agree_sc.has_member
	 */
	struct Ump_party_invite_agree_sc_has_member_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_invite_agree_sc.get_member
	 */
	struct Ump_party_invite_agree_sc_get_member_Params
	{
	public:
		struct Fmps_party_member                                   ReturnValue;                                             // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_invite_agree_sc.alloc_member
	 */
	struct Ump_party_invite_agree_sc_alloc_member_Params
	{
	public:
		struct Fmps_party_member                                   ReturnValue;                                             // 0x0000(0x0098)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_pr_sc.has_info
	 */
	struct Ump_party_pr_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_pr_sc.get_info
	 */
	struct Ump_party_pr_sc_get_info_Params
	{
	public:
		struct Fmps_party_info                                     ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_pr_sc.alloc_info
	 */
	struct Ump_party_pr_sc_alloc_info_Params
	{
	public:
		struct Fmps_party_info                                     ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_setup_cs.has_info
	 */
	struct Ump_party_setup_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_setup_cs.get_info
	 */
	struct Ump_party_setup_cs_get_info_Params
	{
	public:
		struct Fmps_party_base                                     ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_setup_cs.alloc_info
	 */
	struct Ump_party_setup_cs_alloc_info_Params
	{
	public:
		struct Fmps_party_base                                     ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_setup_sc.has_info
	 */
	struct Ump_party_setup_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_setup_sc.get_info
	 */
	struct Ump_party_setup_sc_get_info_Params
	{
	public:
		struct Fmps_party_base                                     ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_setup_sc.alloc_info
	 */
	struct Ump_party_setup_sc_alloc_info_Params
	{
	public:
		struct Fmps_party_base                                     ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_teleport_sc.has_owner_pos
	 */
	struct Ump_party_teleport_sc_has_owner_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_teleport_sc.has_item_add
	 */
	struct Ump_party_teleport_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_teleport_sc.get_owner_pos
	 */
	struct Ump_party_teleport_sc_get_owner_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_teleport_sc.get_item_add
	 */
	struct Ump_party_teleport_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_teleport_sc.alloc_owner_pos
	 */
	struct Ump_party_teleport_sc_alloc_owner_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_party_teleport_sc.alloc_item_add
	 */
	struct Ump_party_teleport_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_cancel_sc.has_info
	 */
	struct Ump_personal_trade_cancel_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_cancel_sc.get_info
	 */
	struct Ump_personal_trade_cancel_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_cancel_sc.alloc_info
	 */
	struct Ump_personal_trade_cancel_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_register_sc.has_trade_info
	 */
	struct Ump_personal_trade_item_register_sc_has_trade_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_register_sc.has_inven_info
	 */
	struct Ump_personal_trade_item_register_sc_has_inven_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_register_sc.get_trade_info
	 */
	struct Ump_personal_trade_item_register_sc_get_trade_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_register_sc.get_inven_info
	 */
	struct Ump_personal_trade_item_register_sc_get_inven_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_register_sc.alloc_trade_info
	 */
	struct Ump_personal_trade_item_register_sc_alloc_trade_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_register_sc.alloc_inven_info
	 */
	struct Ump_personal_trade_item_register_sc_alloc_inven_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_remove_sc.has_inven_info
	 */
	struct Ump_personal_trade_item_remove_sc_has_inven_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_remove_sc.get_inven_info
	 */
	struct Ump_personal_trade_item_remove_sc_get_inven_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_personal_trade_item_remove_sc.alloc_inven_info
	 */
	struct Ump_personal_trade_item_remove_sc_alloc_inven_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_equip_sc.has_release_pet
	 */
	struct Ump_pet_equip_sc_has_release_pet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_equip_sc.has_equip_pet
	 */
	struct Ump_pet_equip_sc_has_equip_pet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_equip_sc.get_release_pet
	 */
	struct Ump_pet_equip_sc_get_release_pet_Params
	{
	public:
		struct Fmps_pet_info                                       ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_equip_sc.get_equip_pet
	 */
	struct Ump_pet_equip_sc_get_equip_pet_Params
	{
	public:
		struct Fmps_pet_info                                       ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_equip_sc.alloc_release_pet
	 */
	struct Ump_pet_equip_sc_alloc_release_pet_Params
	{
	public:
		struct Fmps_pet_info                                       ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_equip_sc.alloc_equip_pet
	 */
	struct Ump_pet_equip_sc_alloc_equip_pet_Params
	{
	public:
		struct Fmps_pet_info                                       ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_feed_sc.has_pet_info
	 */
	struct Ump_pet_feed_sc_has_pet_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_feed_sc.has_item_info
	 */
	struct Ump_pet_feed_sc_has_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_feed_sc.get_pet_info
	 */
	struct Ump_pet_feed_sc_get_pet_info_Params
	{
	public:
		struct Fmps_pet_info                                       ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_feed_sc.get_item_info
	 */
	struct Ump_pet_feed_sc_get_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_feed_sc.alloc_pet_info
	 */
	struct Ump_pet_feed_sc_alloc_pet_info_Params
	{
	public:
		struct Fmps_pet_info                                       ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pet_feed_sc.alloc_item_info
	 */
	struct Ump_pet_feed_sc_alloc_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_add_sc.has_pk_revenge
	 */
	struct Ump_pk_revenge_add_sc_has_pk_revenge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_add_sc.get_pk_revenge
	 */
	struct Ump_pk_revenge_add_sc_get_pk_revenge_Params
	{
	public:
		struct Fmps_pk_revenge                                     ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_add_sc.alloc_pk_revenge
	 */
	struct Ump_pk_revenge_add_sc_alloc_pk_revenge_Params
	{
	public:
		struct Fmps_pk_revenge                                     ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_result_sc.has_pk_revenge
	 */
	struct Ump_pk_revenge_result_sc_has_pk_revenge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_result_sc.get_pk_revenge
	 */
	struct Ump_pk_revenge_result_sc_get_pk_revenge_Params
	{
	public:
		struct Fmps_pk_revenge                                     ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_result_sc.alloc_pk_revenge
	 */
	struct Ump_pk_revenge_result_sc_alloc_pk_revenge_Params
	{
	public:
		struct Fmps_pk_revenge                                     ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_trace_sc.has_pos
	 */
	struct Ump_pk_revenge_trace_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_trace_sc.has_info
	 */
	struct Ump_pk_revenge_trace_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_trace_sc.get_pos
	 */
	struct Ump_pk_revenge_trace_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_trace_sc.get_info
	 */
	struct Ump_pk_revenge_trace_sc_get_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_trace_sc.alloc_pos
	 */
	struct Ump_pk_revenge_trace_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_pk_revenge_trace_sc.alloc_info
	 */
	struct Ump_pk_revenge_trace_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_make_sc.has_info
	 */
	struct Ump_profesion_make_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_make_sc.get_info
	 */
	struct Ump_profesion_make_sc_get_info_Params
	{
	public:
		struct Fmps_profesion_update                               ReturnValue;                                             // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_make_sc.alloc_info
	 */
	struct Ump_profesion_make_sc_alloc_info_Params
	{
	public:
		struct Fmps_profesion_update                               ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_reset_sc.has_info
	 */
	struct Ump_profesion_reset_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_reset_sc.get_info
	 */
	struct Ump_profesion_reset_sc_get_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_reset_sc.alloc_info
	 */
	struct Ump_profesion_reset_sc_alloc_info_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_upgrade_sc.has_info
	 */
	struct Ump_profesion_upgrade_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_upgrade_sc.get_info
	 */
	struct Ump_profesion_upgrade_sc_get_info_Params
	{
	public:
		struct Fmps_profesion_update                               ReturnValue;                                             // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_profesion_upgrade_sc.alloc_info
	 */
	struct Ump_profesion_upgrade_sc_alloc_info_Params
	{
	public:
		struct Fmps_profesion_update                               ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_accept_sc.has_update_item
	 */
	struct Ump_quest_accept_sc_has_update_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_accept_sc.get_update_item
	 */
	struct Ump_quest_accept_sc_get_update_item_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_accept_sc.alloc_update_item
	 */
	struct Ump_quest_accept_sc_alloc_update_item_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_finish_sc.has_reward
	 */
	struct Ump_quest_finish_sc_has_reward_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_finish_sc.has_profesion
	 */
	struct Ump_quest_finish_sc_has_profesion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_finish_sc.get_reward
	 */
	struct Ump_quest_finish_sc_get_reward_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_finish_sc.get_profesion
	 */
	struct Ump_quest_finish_sc_get_profesion_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_finish_sc.alloc_reward
	 */
	struct Ump_quest_finish_sc_alloc_reward_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_finish_sc.alloc_profesion
	 */
	struct Ump_quest_finish_sc_alloc_profesion_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_giveup_sc.has_reward
	 */
	struct Ump_quest_giveup_sc_has_reward_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_giveup_sc.get_reward
	 */
	struct Ump_quest_giveup_sc_get_reward_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_giveup_sc.alloc_reward
	 */
	struct Ump_quest_giveup_sc_alloc_reward_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_reward_change_sc.has_quest_reward
	 */
	struct Ump_quest_reward_change_sc_has_quest_reward_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_reward_change_sc.has_info
	 */
	struct Ump_quest_reward_change_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_reward_change_sc.get_quest_reward
	 */
	struct Ump_quest_reward_change_sc_get_quest_reward_Params
	{
	public:
		struct Fmps_quest_reward                                   ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_reward_change_sc.get_info
	 */
	struct Ump_quest_reward_change_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_reward_change_sc.alloc_quest_reward
	 */
	struct Ump_quest_reward_change_sc_alloc_quest_reward_Params
	{
	public:
		struct Fmps_quest_reward                                   ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_quest_reward_change_sc.alloc_info
	 */
	struct Ump_quest_reward_change_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_randombox_open_sc.has_reward_item
	 */
	struct Ump_randombox_open_sc_has_reward_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_randombox_open_sc.get_reward_item
	 */
	struct Ump_randombox_open_sc_get_reward_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_randombox_open_sc.alloc_reward_item
	 */
	struct Ump_randombox_open_sc_alloc_reward_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_recovery_exp_sc.has_item_add
	 */
	struct Ump_recovery_exp_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_recovery_exp_sc.get_item_add
	 */
	struct Ump_recovery_exp_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_recovery_exp_sc.alloc_item_add
	 */
	struct Ump_recovery_exp_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_reflection_equip_sc.has_release_info
	 */
	struct Ump_reflection_equip_sc_has_release_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_reflection_equip_sc.has_equip_info
	 */
	struct Ump_reflection_equip_sc_has_equip_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_reflection_equip_sc.get_release_info
	 */
	struct Ump_reflection_equip_sc_get_release_info_Params
	{
	public:
		struct Fmps_reflection                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_reflection_equip_sc.get_equip_info
	 */
	struct Ump_reflection_equip_sc_get_equip_info_Params
	{
	public:
		struct Fmps_reflection                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_reflection_equip_sc.alloc_release_info
	 */
	struct Ump_reflection_equip_sc_alloc_release_info_Params
	{
	public:
		struct Fmps_reflection                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_reflection_equip_sc.alloc_equip_info
	 */
	struct Ump_reflection_equip_sc_alloc_equip_info_Params
	{
	public:
		struct Fmps_reflection                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_release_avatar_sc.has_character
	 */
	struct Ump_release_avatar_sc_has_character_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_release_avatar_sc.get_character
	 */
	struct Ump_release_avatar_sc_get_character_Params
	{
	public:
		struct Fmps_character                                      ReturnValue;                                             // 0x0000(0x0420)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_release_avatar_sc.alloc_character
	 */
	struct Ump_release_avatar_sc_alloc_character_Params
	{
	public:
		struct Fmps_character                                      ReturnValue;                                             // 0x0000(0x0420)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_repute_quest_finish_count_reset_sc.has_info
	 */
	struct Ump_repute_quest_finish_count_reset_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_repute_quest_finish_count_reset_sc.get_info
	 */
	struct Ump_repute_quest_finish_count_reset_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_repute_quest_finish_count_reset_sc.alloc_info
	 */
	struct Ump_repute_quest_finish_count_reset_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_change_option_sc.has_room
	 */
	struct Ump_room_change_option_sc_has_room_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_change_option_sc.get_room
	 */
	struct Ump_room_change_option_sc_get_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_change_option_sc.alloc_room
	 */
	struct Ump_room_change_option_sc_alloc_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_create_sc.has_room
	 */
	struct Ump_room_create_sc_has_room_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_create_sc.get_room
	 */
	struct Ump_room_create_sc_get_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_create_sc.alloc_room
	 */
	struct Ump_room_create_sc_alloc_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_info_sc.has_room
	 */
	struct Ump_room_info_sc_has_room_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_info_sc.get_room
	 */
	struct Ump_room_info_sc_get_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_info_sc.alloc_room
	 */
	struct Ump_room_info_sc_alloc_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_join_sc.has_room
	 */
	struct Ump_room_join_sc_has_room_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_join_sc.get_room
	 */
	struct Ump_room_join_sc_get_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_join_sc.alloc_room
	 */
	struct Ump_room_join_sc_alloc_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_pr_sc.has_room
	 */
	struct Ump_room_pr_sc_has_room_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_pr_sc.get_room
	 */
	struct Ump_room_pr_sc_get_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_room_pr_sc.alloc_room
	 */
	struct Ump_room_pr_sc_alloc_room_Params
	{
	public:
		struct Fmps_room                                           ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.has_seasonpass
	 */
	struct Ump_seasonpass_challenge_complet_sc_has_seasonpass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.has_goods
	 */
	struct Ump_seasonpass_challenge_complet_sc_has_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.has_challenge
	 */
	struct Ump_seasonpass_challenge_complet_sc_has_challenge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.get_seasonpass
	 */
	struct Ump_seasonpass_challenge_complet_sc_get_seasonpass_Params
	{
	public:
		struct Fmps_seasonpass                                     ReturnValue;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.get_goods
	 */
	struct Ump_seasonpass_challenge_complet_sc_get_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.get_challenge
	 */
	struct Ump_seasonpass_challenge_complet_sc_get_challenge_Params
	{
	public:
		struct Fmps_seasonpass_challenge                           ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.alloc_seasonpass
	 */
	struct Ump_seasonpass_challenge_complet_sc_alloc_seasonpass_Params
	{
	public:
		struct Fmps_seasonpass                                     ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.alloc_goods
	 */
	struct Ump_seasonpass_challenge_complet_sc_alloc_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_challenge_complet_sc.alloc_challenge
	 */
	struct Ump_seasonpass_challenge_complet_sc_alloc_challenge_Params
	{
	public:
		struct Fmps_seasonpass_challenge                           ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_reward_sc.has_item_add
	 */
	struct Ump_seasonpass_reward_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_reward_sc.has_info
	 */
	struct Ump_seasonpass_reward_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_reward_sc.get_item_add
	 */
	struct Ump_seasonpass_reward_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_reward_sc.get_info
	 */
	struct Ump_seasonpass_reward_sc_get_info_Params
	{
	public:
		struct Fmps_seasonpass                                     ReturnValue;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_reward_sc.alloc_item_add
	 */
	struct Ump_seasonpass_reward_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_reward_sc.alloc_info
	 */
	struct Ump_seasonpass_reward_sc_alloc_info_Params
	{
	public:
		struct Fmps_seasonpass                                     ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_unlock_sc.has_info
	 */
	struct Ump_seasonpass_unlock_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_unlock_sc.has_goods
	 */
	struct Ump_seasonpass_unlock_sc_has_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_unlock_sc.get_info
	 */
	struct Ump_seasonpass_unlock_sc_get_info_Params
	{
	public:
		struct Fmps_seasonpass                                     ReturnValue;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_unlock_sc.get_goods
	 */
	struct Ump_seasonpass_unlock_sc_get_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_unlock_sc.alloc_info
	 */
	struct Ump_seasonpass_unlock_sc_alloc_info_Params
	{
	public:
		struct Fmps_seasonpass                                     ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_seasonpass_unlock_sc.alloc_goods
	 */
	struct Ump_seasonpass_unlock_sc_alloc_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_server_change_sc.has_pos
	 */
	struct Ump_server_change_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_server_change_sc.get_pos
	 */
	struct Ump_server_change_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_server_change_sc.alloc_pos
	 */
	struct Ump_server_change_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_tower_teleport_sc.has_pos
	 */
	struct Ump_siege_tower_teleport_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_tower_teleport_sc.get_pos
	 */
	struct Ump_siege_tower_teleport_sc_get_pos_Params
	{
	public:
		struct Fmps_vector2d                                       ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_tower_teleport_sc.alloc_pos
	 */
	struct Ump_siege_tower_teleport_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector2d                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_atk_release_machine_cs.has_machine_info
	 */
	struct Ump_siege_warfare_atk_release_machine_cs_has_machine_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_atk_release_machine_cs.get_machine_info
	 */
	struct Ump_siege_warfare_atk_release_machine_cs_get_machine_info_Params
	{
	public:
		struct Fmps_siege_machine                                  ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_atk_release_machine_cs.alloc_machine_info
	 */
	struct Ump_siege_warfare_atk_release_machine_cs_alloc_machine_info_Params
	{
	public:
		struct Fmps_siege_machine                                  ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_def_release_machine_cs.has_machine_info
	 */
	struct Ump_siege_warfare_def_release_machine_cs_has_machine_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_def_release_machine_cs.get_machine_info
	 */
	struct Ump_siege_warfare_def_release_machine_cs_get_machine_info_Params
	{
	public:
		struct Fmps_siege_machine                                  ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_def_release_machine_cs.alloc_machine_info
	 */
	struct Ump_siege_warfare_def_release_machine_cs_alloc_machine_info_Params
	{
	public:
		struct Fmps_siege_machine                                  ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_time_sc.has_time_info
	 */
	struct Ump_siege_warfare_time_sc_has_time_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_time_sc.get_time_info
	 */
	struct Ump_siege_warfare_time_sc_get_time_info_Params
	{
	public:
		struct Fmps_siege_warfare_time_info                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_siege_warfare_time_sc.alloc_time_info
	 */
	struct Ump_siege_warfare_time_sc_alloc_time_info_Params
	{
	public:
		struct Fmps_siege_warfare_time_info                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_force_reinforce_sc.has_update_goods
	 */
	struct Ump_skill_force_reinforce_sc_has_update_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_force_reinforce_sc.get_update_goods
	 */
	struct Ump_skill_force_reinforce_sc_get_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_force_reinforce_sc.alloc_update_goods
	 */
	struct Ump_skill_force_reinforce_sc_alloc_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_learn_sc.has_skill
	 */
	struct Ump_skill_learn_sc_has_skill_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_learn_sc.has_info
	 */
	struct Ump_skill_learn_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_learn_sc.get_skill
	 */
	struct Ump_skill_learn_sc_get_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_learn_sc.get_info
	 */
	struct Ump_skill_learn_sc_get_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_learn_sc.alloc_skill
	 */
	struct Ump_skill_learn_sc_alloc_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_learn_sc.alloc_info
	 */
	struct Ump_skill_learn_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_levelup_sc.has_skill
	 */
	struct Ump_skill_levelup_sc_has_skill_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_levelup_sc.has_info
	 */
	struct Ump_skill_levelup_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_levelup_sc.get_skill
	 */
	struct Ump_skill_levelup_sc_get_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_levelup_sc.get_info
	 */
	struct Ump_skill_levelup_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_levelup_sc.alloc_skill
	 */
	struct Ump_skill_levelup_sc_alloc_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_levelup_sc.alloc_info
	 */
	struct Ump_skill_levelup_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_passive_levelup_sc.has_skill
	 */
	struct Ump_skill_passive_levelup_sc_has_skill_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_passive_levelup_sc.has_info
	 */
	struct Ump_skill_passive_levelup_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_passive_levelup_sc.get_skill
	 */
	struct Ump_skill_passive_levelup_sc_get_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_passive_levelup_sc.get_info
	 */
	struct Ump_skill_passive_levelup_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_passive_levelup_sc.alloc_skill
	 */
	struct Ump_skill_passive_levelup_sc_alloc_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_passive_levelup_sc.alloc_info
	 */
	struct Ump_skill_passive_levelup_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_sc.has_target_info
	 */
	struct Ump_skill_start_sc_has_target_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_sc.has_super_armor
	 */
	struct Ump_skill_start_sc_has_super_armor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_sc.get_target_info
	 */
	struct Ump_skill_start_sc_get_target_info_Params
	{
	public:
		struct Fmps_target_info                                    ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_sc.get_super_armor
	 */
	struct Ump_skill_start_sc_get_super_armor_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_sc.alloc_target_info
	 */
	struct Ump_skill_start_sc_alloc_target_info_Params
	{
	public:
		struct Fmps_target_info                                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_sc.alloc_super_armor
	 */
	struct Ump_skill_start_sc_alloc_super_armor_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_story_dungeon_sc.has_super_armor
	 */
	struct Ump_skill_start_story_dungeon_sc_has_super_armor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_story_dungeon_sc.get_super_armor
	 */
	struct Ump_skill_start_story_dungeon_sc_get_super_armor_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_start_story_dungeon_sc.alloc_super_armor
	 */
	struct Ump_skill_start_story_dungeon_sc_alloc_super_armor_Params
	{
	public:
		struct Fmps_buff                                           ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_use_sc.has_skill
	 */
	struct Ump_skill_use_sc_has_skill_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_use_sc.get_skill
	 */
	struct Ump_skill_use_sc_get_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_skill_use_sc.alloc_skill
	 */
	struct Ump_skill_use_sc_alloc_skill_Params
	{
	public:
		struct Fmps_skill                                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_option_make_sc.has_update_goods
	 */
	struct Ump_slot_option_make_sc_has_update_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_option_make_sc.get_update_goods
	 */
	struct Ump_slot_option_make_sc_get_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_option_make_sc.alloc_update_goods
	 */
	struct Ump_slot_option_make_sc_alloc_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_option_select_sc.has_ability
	 */
	struct Ump_slot_option_select_sc_has_ability_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_option_select_sc.get_ability
	 */
	struct Ump_slot_option_select_sc_get_ability_Params
	{
	public:
		struct Fmps_combo_ability                                  ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_option_select_sc.alloc_ability
	 */
	struct Ump_slot_option_select_sc_alloc_ability_Params
	{
	public:
		struct Fmps_combo_ability                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_upgrade_sc.has_item_add
	 */
	struct Ump_slot_upgrade_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_upgrade_sc.get_item_add
	 */
	struct Ump_slot_upgrade_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_slot_upgrade_sc.alloc_item_add
	 */
	struct Ump_slot_upgrade_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_expand_sc.has_info
	 */
	struct Ump_storage_expand_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_expand_sc.get_info
	 */
	struct Ump_storage_expand_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_expand_sc.alloc_info
	 */
	struct Ump_storage_expand_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_goods_move_cs.has_goods
	 */
	struct Ump_storage_goods_move_cs_has_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_goods_move_cs.get_goods
	 */
	struct Ump_storage_goods_move_cs_get_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_goods_move_cs.alloc_goods
	 */
	struct Ump_storage_goods_move_cs_alloc_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_move_cs.has_info
	 */
	struct Ump_storage_move_cs_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_move_cs.get_info
	 */
	struct Ump_storage_move_cs_get_info_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_move_cs.alloc_info
	 */
	struct Ump_storage_move_cs_alloc_info_Params
	{
	public:
		struct Fmps_item_iuid_list                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_move_sc.has_info
	 */
	struct Ump_storage_move_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_move_sc.get_info
	 */
	struct Ump_storage_move_sc_get_info_Params
	{
	public:
		struct Fmps_storage_move                                   ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_move_sc.alloc_info
	 */
	struct Ump_storage_move_sc_alloc_info_Params
	{
	public:
		struct Fmps_storage_move                                   ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.has_private_storage_item
	 */
	struct Ump_storage_open_sc_has_private_storage_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.has_account_storage_item
	 */
	struct Ump_storage_open_sc_has_account_storage_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.has_account_storage_info
	 */
	struct Ump_storage_open_sc_has_account_storage_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.get_private_storage_item
	 */
	struct Ump_storage_open_sc_get_private_storage_item_Params
	{
	public:
		struct Fmps_inventory                                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.get_account_storage_item
	 */
	struct Ump_storage_open_sc_get_account_storage_item_Params
	{
	public:
		struct Fmps_inventory                                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.get_account_storage_info
	 */
	struct Ump_storage_open_sc_get_account_storage_info_Params
	{
	public:
		struct Fmps_account_storage                                ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.alloc_private_storage_item
	 */
	struct Ump_storage_open_sc_alloc_private_storage_item_Params
	{
	public:
		struct Fmps_inventory                                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.alloc_account_storage_item
	 */
	struct Ump_storage_open_sc_alloc_account_storage_item_Params
	{
	public:
		struct Fmps_inventory                                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_storage_open_sc.alloc_account_storage_info
	 */
	struct Ump_storage_open_sc_alloc_account_storage_info_Params
	{
	public:
		struct Fmps_account_storage                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.has_item_reinforce
	 */
	struct Ump_street_stall_buy_cs_has_item_reinforce_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.has_item_luck_reinforce
	 */
	struct Ump_street_stall_buy_cs_has_item_luck_reinforce_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.has_item_enchant_option_change
	 */
	struct Ump_street_stall_buy_cs_has_item_enchant_option_change_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.get_item_reinforce
	 */
	struct Ump_street_stall_buy_cs_get_item_reinforce_Params
	{
	public:
		struct Fmps_street_stall_item_reinforce                    ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.get_item_luck_reinforce
	 */
	struct Ump_street_stall_buy_cs_get_item_luck_reinforce_Params
	{
	public:
		struct Fmps_street_stall_item_luck_reinforce               ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.get_item_enchant_option_change
	 */
	struct Ump_street_stall_buy_cs_get_item_enchant_option_change_Params
	{
	public:
		struct Fmps_street_stall_item_enchant_option_change        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.alloc_item_reinforce
	 */
	struct Ump_street_stall_buy_cs_alloc_item_reinforce_Params
	{
	public:
		struct Fmps_street_stall_item_reinforce                    ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.alloc_item_luck_reinforce
	 */
	struct Ump_street_stall_buy_cs_alloc_item_luck_reinforce_Params
	{
	public:
		struct Fmps_street_stall_item_luck_reinforce               ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_cs.alloc_item_enchant_option_change
	 */
	struct Ump_street_stall_buy_cs_alloc_item_enchant_option_change_Params
	{
	public:
		struct Fmps_street_stall_item_enchant_option_change        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.has_profesion_make_result
	 */
	struct Ump_street_stall_buy_sc_has_profesion_make_result_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.has_item_reinforce_result
	 */
	struct Ump_street_stall_buy_sc_has_item_reinforce_result_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.has_item_luck_reinforce_result
	 */
	struct Ump_street_stall_buy_sc_has_item_luck_reinforce_result_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.has_item_enchant_option_change_result
	 */
	struct Ump_street_stall_buy_sc_has_item_enchant_option_change_result_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.get_profesion_make_result
	 */
	struct Ump_street_stall_buy_sc_get_profesion_make_result_Params
	{
	public:
		struct Fmps_profesion_update                               ReturnValue;                                             // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.get_item_reinforce_result
	 */
	struct Ump_street_stall_buy_sc_get_item_reinforce_result_Params
	{
	public:
		struct Fmps_street_stall_item_reinforce_result             ReturnValue;                                             // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.get_item_luck_reinforce_result
	 */
	struct Ump_street_stall_buy_sc_get_item_luck_reinforce_result_Params
	{
	public:
		struct Fmps_street_stall_item_luck_reinforce_result        ReturnValue;                                             // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.get_item_enchant_option_change_result
	 */
	struct Ump_street_stall_buy_sc_get_item_enchant_option_change_result_Params
	{
	public:
		struct Fmps_street_stall_item_enchant_option_change_result ReturnValue;                                             // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.alloc_profesion_make_result
	 */
	struct Ump_street_stall_buy_sc_alloc_profesion_make_result_Params
	{
	public:
		struct Fmps_profesion_update                               ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.alloc_item_reinforce_result
	 */
	struct Ump_street_stall_buy_sc_alloc_item_reinforce_result_Params
	{
	public:
		struct Fmps_street_stall_item_reinforce_result             ReturnValue;                                             // 0x0000(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.alloc_item_luck_reinforce_result
	 */
	struct Ump_street_stall_buy_sc_alloc_item_luck_reinforce_result_Params
	{
	public:
		struct Fmps_street_stall_item_luck_reinforce_result        ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_buy_sc.alloc_item_enchant_option_change_result
	 */
	struct Ump_street_stall_buy_sc_alloc_item_enchant_option_change_result_Params
	{
	public:
		struct Fmps_street_stall_item_enchant_option_change_result ReturnValue;                                             // 0x0000(0x0070)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_info_sc.has_street_stall_info
	 */
	struct Ump_street_stall_info_sc_has_street_stall_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_info_sc.get_street_stall_info
	 */
	struct Ump_street_stall_info_sc_get_street_stall_info_Params
	{
	public:
		struct Fmps_street_stall_info                              ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_info_sc.alloc_street_stall_info
	 */
	struct Ump_street_stall_info_sc_alloc_street_stall_info_Params
	{
	public:
		struct Fmps_street_stall_info                              ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_sell_info_sc.has_log
	 */
	struct Ump_street_stall_sell_info_sc_has_log_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_sell_info_sc.get_log
	 */
	struct Ump_street_stall_sell_info_sc_get_log_Params
	{
	public:
		struct Fmps_street_stall_log                               ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_sell_info_sc.alloc_log
	 */
	struct Ump_street_stall_sell_info_sc_alloc_log_Params
	{
	public:
		struct Fmps_street_stall_log                               ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_start_result_cs.has_item_info
	 */
	struct Ump_street_stall_start_result_cs_has_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_start_result_cs.get_item_info
	 */
	struct Ump_street_stall_start_result_cs_get_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_street_stall_start_result_cs.alloc_item_info
	 */
	struct Ump_street_stall_start_result_cs_alloc_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_change_sc.has_temp_pet
	 */
	struct Ump_temp_pet_change_sc_has_temp_pet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_change_sc.has_item_add
	 */
	struct Ump_temp_pet_change_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_change_sc.get_temp_pet
	 */
	struct Ump_temp_pet_change_sc_get_temp_pet_Params
	{
	public:
		struct Fmps_temp_pet                                       ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_change_sc.get_item_add
	 */
	struct Ump_temp_pet_change_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_change_sc.alloc_temp_pet
	 */
	struct Ump_temp_pet_change_sc_alloc_temp_pet_Params
	{
	public:
		struct Fmps_temp_pet                                       ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_change_sc.alloc_item_add
	 */
	struct Ump_temp_pet_change_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_confirm_sc.has_pet_info
	 */
	struct Ump_temp_pet_confirm_sc_has_pet_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_confirm_sc.get_pet_info
	 */
	struct Ump_temp_pet_confirm_sc_get_pet_info_Params
	{
	public:
		struct Fmps_obtain_pet_info                                ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_pet_confirm_sc.alloc_pet_info
	 */
	struct Ump_temp_pet_confirm_sc_alloc_pet_info_Params
	{
	public:
		struct Fmps_obtain_pet_info                                ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.has_info
	 */
	struct Ump_temp_reflection_change_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.has_goods
	 */
	struct Ump_temp_reflection_change_sc_has_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.has_cash_info
	 */
	struct Ump_temp_reflection_change_sc_has_cash_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.get_info
	 */
	struct Ump_temp_reflection_change_sc_get_info_Params
	{
	public:
		struct Fmps_temp_reflection                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.get_goods
	 */
	struct Ump_temp_reflection_change_sc_get_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.get_cash_info
	 */
	struct Ump_temp_reflection_change_sc_get_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.alloc_info
	 */
	struct Ump_temp_reflection_change_sc_alloc_info_Params
	{
	public:
		struct Fmps_temp_reflection                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.alloc_goods
	 */
	struct Ump_temp_reflection_change_sc_alloc_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_change_sc.alloc_cash_info
	 */
	struct Ump_temp_reflection_change_sc_alloc_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_confirm_sc.has_info
	 */
	struct Ump_temp_reflection_confirm_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_confirm_sc.get_info
	 */
	struct Ump_temp_reflection_confirm_sc_get_info_Params
	{
	public:
		struct Fmps_obtain_reflection                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_temp_reflection_confirm_sc.alloc_info
	 */
	struct Ump_temp_reflection_confirm_sc_alloc_info_Params
	{
	public:
		struct Fmps_obtain_reflection                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_test_game_login_cs.has_map
	 */
	struct Ump_test_game_login_cs_has_map_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_test_game_login_cs.get_map
	 */
	struct Ump_test_game_login_cs_get_map_Params
	{
	public:
		struct Fmps_zone_info                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_test_game_login_cs.alloc_map
	 */
	struct Ump_test_game_login_cs_alloc_map_Params
	{
	public:
		struct Fmps_zone_info                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_test_game_login_sc.has_character
	 */
	struct Ump_test_game_login_sc_has_character_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_test_game_login_sc.get_character
	 */
	struct Ump_test_game_login_sc_get_character_Params
	{
	public:
		struct Fmps_character                                      ReturnValue;                                             // 0x0000(0x0420)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_test_game_login_sc.alloc_character
	 */
	struct Ump_test_game_login_sc_alloc_character_Params
	{
	public:
		struct Fmps_character                                      ReturnValue;                                             // 0x0000(0x0420)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_add_sc.has_item_update
	 */
	struct Ump_title_add_sc_has_item_update_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_add_sc.has_info
	 */
	struct Ump_title_add_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_add_sc.get_item_update
	 */
	struct Ump_title_add_sc_get_item_update_Params
	{
	public:
		struct Fmps_item_update                                    ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_add_sc.get_info
	 */
	struct Ump_title_add_sc_get_info_Params
	{
	public:
		struct Fmps_title_info                                     ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_add_sc.alloc_item_update
	 */
	struct Ump_title_add_sc_alloc_item_update_Params
	{
	public:
		struct Fmps_item_update                                    ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_add_sc.alloc_info
	 */
	struct Ump_title_add_sc_alloc_info_Params
	{
	public:
		struct Fmps_title_info                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_reward_sc.has_title_info
	 */
	struct Ump_title_reward_sc_has_title_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_reward_sc.has_item_add
	 */
	struct Ump_title_reward_sc_has_item_add_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_reward_sc.get_title_info
	 */
	struct Ump_title_reward_sc_get_title_info_Params
	{
	public:
		struct Fmps_title                                          ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_reward_sc.get_item_add
	 */
	struct Ump_title_reward_sc_get_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_reward_sc.alloc_title_info
	 */
	struct Ump_title_reward_sc_alloc_title_info_Params
	{
	public:
		struct Fmps_title                                          ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_title_reward_sc.alloc_item_add
	 */
	struct Ump_title_reward_sc_alloc_item_add_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_tonic_charge_sc.has_item_info
	 */
	struct Ump_tonic_charge_sc_has_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_tonic_charge_sc.get_item_info
	 */
	struct Ump_tonic_charge_sc_get_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_tonic_charge_sc.alloc_item_info
	 */
	struct Ump_tonic_charge_sc_alloc_item_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_town_alert_sc.has_town_info
	 */
	struct Ump_town_alert_sc_has_town_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_town_alert_sc.get_town_info
	 */
	struct Ump_town_alert_sc_get_town_info_Params
	{
	public:
		struct Fmps_guild_town_info                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_town_alert_sc.alloc_town_info
	 */
	struct Ump_town_alert_sc_alloc_town_info_Params
	{
	public:
		struct Fmps_guild_town_info                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_transform_avatar_sc.has_use_item
	 */
	struct Ump_transform_avatar_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_transform_avatar_sc.has_avatar_info
	 */
	struct Ump_transform_avatar_sc_has_avatar_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_transform_avatar_sc.get_use_item
	 */
	struct Ump_transform_avatar_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_transform_avatar_sc.get_avatar_info
	 */
	struct Ump_transform_avatar_sc_get_avatar_info_Params
	{
	public:
		struct Fmps_avatar_info                                    ReturnValue;                                             // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_transform_avatar_sc.alloc_use_item
	 */
	struct Ump_transform_avatar_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_transform_avatar_sc.alloc_avatar_info
	 */
	struct Ump_transform_avatar_sc_alloc_avatar_info_Params
	{
	public:
		struct Fmps_avatar_info                                    ReturnValue;                                             // 0x0000(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_treasureboxkey_charge_sc.has_info
	 */
	struct Ump_treasureboxkey_charge_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_treasureboxkey_charge_sc.get_info
	 */
	struct Ump_treasureboxkey_charge_sc_get_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_treasureboxkey_charge_sc.alloc_info
	 */
	struct Ump_treasureboxkey_charge_sc_alloc_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_add_sc.has_update_item
	 */
	struct Ump_vehicle_add_sc_has_update_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_add_sc.has_info
	 */
	struct Ump_vehicle_add_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_add_sc.get_update_item
	 */
	struct Ump_vehicle_add_sc_get_update_item_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_add_sc.get_info
	 */
	struct Ump_vehicle_add_sc_get_info_Params
	{
	public:
		struct Fmps_vehicle                                        ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_add_sc.alloc_update_item
	 */
	struct Ump_vehicle_add_sc_alloc_update_item_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_add_sc.alloc_info
	 */
	struct Ump_vehicle_add_sc_alloc_info_Params
	{
	public:
		struct Fmps_vehicle                                        ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_equip_item_sc.has_info
	 */
	struct Ump_vehicle_equip_item_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_equip_item_sc.get_info
	 */
	struct Ump_vehicle_equip_item_sc_get_info_Params
	{
	public:
		struct Fmps_list_vehicle_equip_item                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_vehicle_equip_item_sc.alloc_info
	 */
	struct Ump_vehicle_equip_item_sc_alloc_info_Params
	{
	public:
		struct Fmps_list_vehicle_equip_item                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_register_sc.has_info
	 */
	struct Ump_wanted_murder_register_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_register_sc.has_good_info
	 */
	struct Ump_wanted_murder_register_sc_has_good_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_register_sc.get_info
	 */
	struct Ump_wanted_murder_register_sc_get_info_Params
	{
	public:
		struct Fmps_wanted_murder_register_info                    ReturnValue;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_register_sc.get_good_info
	 */
	struct Ump_wanted_murder_register_sc_get_good_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_register_sc.alloc_info
	 */
	struct Ump_wanted_murder_register_sc_alloc_info_Params
	{
	public:
		struct Fmps_wanted_murder_register_info                    ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_register_sc.alloc_good_info
	 */
	struct Ump_wanted_murder_register_sc_alloc_good_info_Params
	{
	public:
		struct Fmps_update_goods_list                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_reward_sc.has_info
	 */
	struct Ump_wanted_murder_reward_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_reward_sc.get_info
	 */
	struct Ump_wanted_murder_reward_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_reward_sc.alloc_info
	 */
	struct Ump_wanted_murder_reward_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_trace_sc.has_pos
	 */
	struct Ump_wanted_murder_trace_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_trace_sc.has_info
	 */
	struct Ump_wanted_murder_trace_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_trace_sc.get_pos
	 */
	struct Ump_wanted_murder_trace_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_trace_sc.get_info
	 */
	struct Ump_wanted_murder_trace_sc_get_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_trace_sc.alloc_pos
	 */
	struct Ump_wanted_murder_trace_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_wanted_murder_trace_sc.alloc_info
	 */
	struct Ump_wanted_murder_trace_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_call_point_cs.has_call_point
	 */
	struct Ump_zone_call_point_cs_has_call_point_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_call_point_cs.get_call_point
	 */
	struct Ump_zone_call_point_cs_get_call_point_Params
	{
	public:
		struct Fmps_vector2d                                       ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_call_point_cs.alloc_call_point
	 */
	struct Ump_zone_call_point_cs_alloc_call_point_Params
	{
	public:
		struct Fmps_vector2d                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_call_point_sc.has_call_point
	 */
	struct Ump_zone_call_point_sc_has_call_point_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_call_point_sc.get_call_point
	 */
	struct Ump_zone_call_point_sc_get_call_point_Params
	{
	public:
		struct Fmps_vector2d                                       ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_call_point_sc.alloc_call_point
	 */
	struct Ump_zone_call_point_sc_alloc_call_point_Params
	{
	public:
		struct Fmps_vector2d                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_change_enter_sc.has_pos
	 */
	struct Ump_zone_change_enter_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_change_enter_sc.get_pos
	 */
	struct Ump_zone_change_enter_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_change_enter_sc.alloc_pos
	 */
	struct Ump_zone_change_enter_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_drop_sc.has_item_durability
	 */
	struct Ump_zone_character_drop_sc_has_item_durability_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_drop_sc.has_info
	 */
	struct Ump_zone_character_drop_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_drop_sc.get_item_durability
	 */
	struct Ump_zone_character_drop_sc_get_item_durability_Params
	{
	public:
		struct Fmps_decrement_item_durability                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_drop_sc.get_info
	 */
	struct Ump_zone_character_drop_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_drop_sc.alloc_item_durability
	 */
	struct Ump_zone_character_drop_sc_alloc_item_durability_Params
	{
	public:
		struct Fmps_decrement_item_durability                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_drop_sc.alloc_info
	 */
	struct Ump_zone_character_drop_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_item_equip_sc.has_info
	 */
	struct Ump_zone_character_item_equip_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_item_equip_sc.get_info
	 */
	struct Ump_zone_character_item_equip_sc_get_info_Params
	{
	public:
		struct Fmps_equip_list                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_character_item_equip_sc.alloc_info
	 */
	struct Ump_zone_character_item_equip_sc_alloc_info_Params
	{
	public:
		struct Fmps_equip_list                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.has_profesion
	 */
	struct Ump_zone_fish_sc_has_profesion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.has_info
	 */
	struct Ump_zone_fish_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.has_durability_info
	 */
	struct Ump_zone_fish_sc_has_durability_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.get_profesion
	 */
	struct Ump_zone_fish_sc_get_profesion_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.get_info
	 */
	struct Ump_zone_fish_sc_get_info_Params
	{
	public:
		struct Fmps_gameitem_update                                ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.get_durability_info
	 */
	struct Ump_zone_fish_sc_get_durability_info_Params
	{
	public:
		struct Fmps_decrement_item_durability                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.alloc_profesion
	 */
	struct Ump_zone_fish_sc_alloc_profesion_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.alloc_info
	 */
	struct Ump_zone_fish_sc_alloc_info_Params
	{
	public:
		struct Fmps_gameitem_update                                ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_fish_sc.alloc_durability_info
	 */
	struct Ump_zone_fish_sc_alloc_durability_info_Params
	{
	public:
		struct Fmps_decrement_item_durability                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_item_pickup_sc.has_info
	 */
	struct Ump_zone_item_pickup_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_item_pickup_sc.get_info
	 */
	struct Ump_zone_item_pickup_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_item_pickup_sc.alloc_info
	 */
	struct Ump_zone_item_pickup_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.has_profesion
	 */
	struct Ump_zone_object_collect_sc_has_profesion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.has_info
	 */
	struct Ump_zone_object_collect_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.has_durability_info
	 */
	struct Ump_zone_object_collect_sc_has_durability_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.get_profesion
	 */
	struct Ump_zone_object_collect_sc_get_profesion_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.get_info
	 */
	struct Ump_zone_object_collect_sc_get_info_Params
	{
	public:
		struct Fmps_gameitem_update                                ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.get_durability_info
	 */
	struct Ump_zone_object_collect_sc_get_durability_info_Params
	{
	public:
		struct Fmps_decrement_item_durability                      ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.alloc_profesion
	 */
	struct Ump_zone_object_collect_sc_alloc_profesion_Params
	{
	public:
		struct Fmps_profesion                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.alloc_info
	 */
	struct Ump_zone_object_collect_sc_alloc_info_Params
	{
	public:
		struct Fmps_gameitem_update                                ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_collect_sc.alloc_durability_info
	 */
	struct Ump_zone_object_collect_sc_alloc_durability_info_Params
	{
	public:
		struct Fmps_decrement_item_durability                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_dead_sc.has_info
	 */
	struct Ump_zone_object_dead_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_dead_sc.get_info
	 */
	struct Ump_zone_object_dead_sc_get_info_Params
	{
	public:
		struct Fmps_zone_object_info                               ReturnValue;                                             // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_dead_sc.alloc_info
	 */
	struct Ump_zone_object_dead_sc_alloc_info_Params
	{
	public:
		struct Fmps_zone_object_info                               ReturnValue;                                             // 0x0000(0x0320)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_update_stat_sc.has_update_stat_list
	 */
	struct Ump_zone_object_update_stat_sc_has_update_stat_list_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_update_stat_sc.get_update_stat_list
	 */
	struct Ump_zone_object_update_stat_sc_get_update_stat_list_Params
	{
	public:
		struct Fmps_stat_update                                    ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_object_update_stat_sc.alloc_update_stat_list
	 */
	struct Ump_zone_object_update_stat_sc_alloc_update_stat_list_Params
	{
	public:
		struct Fmps_stat_update                                    ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_observer_mode_sc.has_target_player
	 */
	struct Ump_zone_observer_mode_sc_has_target_player_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_observer_mode_sc.get_target_player
	 */
	struct Ump_zone_observer_mode_sc_get_target_player_Params
	{
	public:
		struct Fmps_zone_object_info                               ReturnValue;                                             // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_observer_mode_sc.alloc_target_player
	 */
	struct Ump_zone_observer_mode_sc_alloc_target_player_Params
	{
	public:
		struct Fmps_zone_object_info                               ReturnValue;                                             // 0x0000(0x0320)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.has_update_goods
	 */
	struct Ump_zone_revive_sc_has_update_goods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.has_update_exp
	 */
	struct Ump_zone_revive_sc_has_update_exp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.has_revive_pos
	 */
	struct Ump_zone_revive_sc_has_revive_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.has_item_info
	 */
	struct Ump_zone_revive_sc_has_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.get_update_goods
	 */
	struct Ump_zone_revive_sc_get_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.get_update_exp
	 */
	struct Ump_zone_revive_sc_get_update_exp_Params
	{
	public:
		struct Fmps_update_exp                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.get_revive_pos
	 */
	struct Ump_zone_revive_sc_get_revive_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.get_item_info
	 */
	struct Ump_zone_revive_sc_get_item_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.alloc_update_goods
	 */
	struct Ump_zone_revive_sc_alloc_update_goods_Params
	{
	public:
		struct Fmps_update_goods                                   ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.alloc_update_exp
	 */
	struct Ump_zone_revive_sc_alloc_update_exp_Params
	{
	public:
		struct Fmps_update_exp                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.alloc_revive_pos
	 */
	struct Ump_zone_revive_sc_alloc_revive_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_revive_sc.alloc_item_info
	 */
	struct Ump_zone_revive_sc_alloc_item_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_seal_device_info_sc.has_info
	 */
	struct Ump_zone_seal_device_info_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_seal_device_info_sc.get_info
	 */
	struct Ump_zone_seal_device_info_sc_get_info_Params
	{
	public:
		struct Fmps_zone_object_info                               ReturnValue;                                             // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_seal_device_info_sc.alloc_info
	 */
	struct Ump_zone_seal_device_info_sc_alloc_info_Params
	{
	public:
		struct Fmps_zone_object_info                               ReturnValue;                                             // 0x0000(0x0320)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_seal_device_use_sc.has_item_info
	 */
	struct Ump_zone_seal_device_use_sc_has_item_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_seal_device_use_sc.get_item_info
	 */
	struct Ump_zone_seal_device_use_sc_get_item_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_seal_device_use_sc.alloc_item_info
	 */
	struct Ump_zone_seal_device_use_sc_alloc_item_info_Params
	{
	public:
		struct Fmps_item_count_update                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_sector_teleport_sc.has_pos
	 */
	struct Ump_zone_sector_teleport_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_sector_teleport_sc.get_pos
	 */
	struct Ump_zone_sector_teleport_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_sector_teleport_sc.alloc_pos
	 */
	struct Ump_zone_sector_teleport_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_sc.has_use_item
	 */
	struct Ump_zone_teleport_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_sc.has_pos
	 */
	struct Ump_zone_teleport_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_sc.get_use_item
	 */
	struct Ump_zone_teleport_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_sc.get_pos
	 */
	struct Ump_zone_teleport_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_sc.alloc_use_item
	 */
	struct Ump_zone_teleport_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_sc.alloc_pos
	 */
	struct Ump_zone_teleport_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_ai_return_cs.has_return_pos
	 */
	struct Ump_zone_teleport_ai_return_cs_has_return_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_ai_return_cs.get_return_pos
	 */
	struct Ump_zone_teleport_ai_return_cs_get_return_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_ai_return_cs.alloc_return_pos
	 */
	struct Ump_zone_teleport_ai_return_cs_alloc_return_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_channel_move_sc.has_pos
	 */
	struct Ump_zone_teleport_channel_move_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_channel_move_sc.get_pos
	 */
	struct Ump_zone_teleport_channel_move_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_channel_move_sc.alloc_pos
	 */
	struct Ump_zone_teleport_channel_move_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_exit_sc.has_pos
	 */
	struct Ump_zone_teleport_exit_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_exit_sc.get_pos
	 */
	struct Ump_zone_teleport_exit_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_exit_sc.alloc_pos
	 */
	struct Ump_zone_teleport_exit_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_fixed_point_sc.has_use_item
	 */
	struct Ump_zone_teleport_fixed_point_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_fixed_point_sc.has_pos
	 */
	struct Ump_zone_teleport_fixed_point_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_fixed_point_sc.get_use_item
	 */
	struct Ump_zone_teleport_fixed_point_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_fixed_point_sc.get_pos
	 */
	struct Ump_zone_teleport_fixed_point_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_fixed_point_sc.alloc_use_item
	 */
	struct Ump_zone_teleport_fixed_point_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_fixed_point_sc.alloc_pos
	 */
	struct Ump_zone_teleport_fixed_point_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_sc.has_use_item
	 */
	struct Ump_zone_teleport_save_area_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_sc.has_reg_tel_info
	 */
	struct Ump_zone_teleport_save_area_sc_has_reg_tel_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_sc.get_use_item
	 */
	struct Ump_zone_teleport_save_area_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_sc.get_reg_tel_info
	 */
	struct Ump_zone_teleport_save_area_sc_get_reg_tel_info_Params
	{
	public:
		struct Fmps_teleport_area                                  ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_sc.alloc_use_item
	 */
	struct Ump_zone_teleport_save_area_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_sc.alloc_reg_tel_info
	 */
	struct Ump_zone_teleport_save_area_sc_alloc_reg_tel_info_Params
	{
	public:
		struct Fmps_teleport_area                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_delete_cs.has_del_tel_info
	 */
	struct Ump_zone_teleport_save_area_delete_cs_has_del_tel_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_delete_cs.get_del_tel_info
	 */
	struct Ump_zone_teleport_save_area_delete_cs_get_del_tel_info_Params
	{
	public:
		struct Fmps_teleport_area                                  ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_delete_cs.alloc_del_tel_info
	 */
	struct Ump_zone_teleport_save_area_delete_cs_alloc_del_tel_info_Params
	{
	public:
		struct Fmps_teleport_area                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_delete_sc.has_del_tel_info
	 */
	struct Ump_zone_teleport_save_area_delete_sc_has_del_tel_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_delete_sc.get_del_tel_info
	 */
	struct Ump_zone_teleport_save_area_delete_sc_get_del_tel_info_Params
	{
	public:
		struct Fmps_teleport_area                                  ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_save_area_delete_sc.alloc_del_tel_info
	 */
	struct Ump_zone_teleport_save_area_delete_sc_alloc_del_tel_info_Params
	{
	public:
		struct Fmps_teleport_area                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_to_saved_area_sc.has_use_item
	 */
	struct Ump_zone_teleport_to_saved_area_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_to_saved_area_sc.has_pos
	 */
	struct Ump_zone_teleport_to_saved_area_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_to_saved_area_sc.get_use_item
	 */
	struct Ump_zone_teleport_to_saved_area_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_to_saved_area_sc.get_pos
	 */
	struct Ump_zone_teleport_to_saved_area_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_to_saved_area_sc.alloc_use_item
	 */
	struct Ump_zone_teleport_to_saved_area_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_to_saved_area_sc.alloc_pos
	 */
	struct Ump_zone_teleport_to_saved_area_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_view_point_sc.has_use_item
	 */
	struct Ump_zone_teleport_view_point_sc_has_use_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_view_point_sc.has_pos
	 */
	struct Ump_zone_teleport_view_point_sc_has_pos_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_view_point_sc.get_use_item
	 */
	struct Ump_zone_teleport_view_point_sc_get_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_view_point_sc.get_pos
	 */
	struct Ump_zone_teleport_view_point_sc_get_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_view_point_sc.alloc_use_item
	 */
	struct Ump_zone_teleport_view_point_sc_alloc_use_item_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_teleport_view_point_sc.alloc_pos
	 */
	struct Ump_zone_teleport_view_point_sc_alloc_pos_Params
	{
	public:
		struct Fmps_vector                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_treasure_box_open_sc.has_info
	 */
	struct Ump_zone_treasure_box_open_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_treasure_box_open_sc.get_info
	 */
	struct Ump_zone_treasure_box_open_sc_get_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mp_zone_treasure_box_open_sc.alloc_info
	 */
	struct Ump_zone_treasure_box_open_sc_alloc_info_Params
	{
	public:
		struct Fmps_item_add                                       ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_arena_battle_ranking_sc.has_my_ranking
	 */
	struct Umweb_arena_battle_ranking_sc_has_my_ranking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_arena_battle_ranking_sc.get_my_ranking
	 */
	struct Umweb_arena_battle_ranking_sc_get_my_ranking_Params
	{
	public:
		struct Fmps_arena_battle_ranking_info                      ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_arena_battle_ranking_sc.alloc_my_ranking
	 */
	struct Umweb_arena_battle_ranking_sc_alloc_my_ranking_Params
	{
	public:
		struct Fmps_arena_battle_ranking_info                      ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_cash_shop_info_sc.has_cash_info
	 */
	struct Umweb_cash_shop_info_sc_has_cash_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_cash_shop_info_sc.get_cash_info
	 */
	struct Umweb_cash_shop_info_sc_get_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_cash_shop_info_sc.alloc_cash_info
	 */
	struct Umweb_cash_shop_info_sc_alloc_cash_info_Params
	{
	public:
		struct Fmps_cash_info                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_castle_dungeon_info_sc.has_info
	 */
	struct Umweb_castle_dungeon_info_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_castle_dungeon_info_sc.get_info
	 */
	struct Umweb_castle_dungeon_info_sc_get_info_Params
	{
	public:
		struct Fmps_castle_dungeon_info                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_castle_dungeon_info_sc.alloc_info
	 */
	struct Umweb_castle_dungeon_info_sc_alloc_info_Params
	{
	public:
		struct Fmps_castle_dungeon_info                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_castle_town_single_managing_info_sc.has_info
	 */
	struct Umweb_castle_town_single_managing_info_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_castle_town_single_managing_info_sc.get_info
	 */
	struct Umweb_castle_town_single_managing_info_sc_get_info_Params
	{
	public:
		struct Fmps_castle_town_managing_info                      ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_castle_town_single_managing_info_sc.alloc_info
	 */
	struct Umweb_castle_town_single_managing_info_sc_alloc_info_Params
	{
	public:
		struct Fmps_castle_town_managing_info                      ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_character_info_view_sc.has_info
	 */
	struct Umweb_character_info_view_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_character_info_view_sc.get_info
	 */
	struct Umweb_character_info_view_sc_get_info_Params
	{
	public:
		struct Fmps_character_info_view                            ReturnValue;                                             // 0x0000(0x0120)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_character_info_view_sc.alloc_info
	 */
	struct Umweb_character_info_view_sc_alloc_info_Params
	{
	public:
		struct Fmps_character_info_view                            ReturnValue;                                             // 0x0000(0x0120)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_buybag_info_sc.has_info
	 */
	struct Umweb_exchange_buybag_info_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_buybag_info_sc.get_info
	 */
	struct Umweb_exchange_buybag_info_sc_get_info_Params
	{
	public:
		struct Fmps_exchange_buybag_list                           ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_buybag_info_sc.alloc_info
	 */
	struct Umweb_exchange_buybag_info_sc_alloc_info_Params
	{
	public:
		struct Fmps_exchange_buybag_list                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_item_detail_sc.has_item
	 */
	struct Umweb_exchange_item_detail_sc_has_item_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_item_detail_sc.get_item
	 */
	struct Umweb_exchange_item_detail_sc_get_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_item_detail_sc.alloc_item
	 */
	struct Umweb_exchange_item_detail_sc_alloc_item_Params
	{
	public:
		struct Fmps_item                                           ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_itemid_reinforce_count_sc.has_info
	 */
	struct Umweb_exchange_itemid_reinforce_count_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_itemid_reinforce_count_sc.get_info
	 */
	struct Umweb_exchange_itemid_reinforce_count_sc_get_info_Params
	{
	public:
		struct Fmps_exchange_reinforce_count_list                  ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_itemid_reinforce_count_sc.alloc_info
	 */
	struct Umweb_exchange_itemid_reinforce_count_sc_alloc_info_Params
	{
	public:
		struct Fmps_exchange_reinforce_count_list                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_itemtype_count_sc.has_info
	 */
	struct Umweb_exchange_itemtype_count_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_itemtype_count_sc.get_info
	 */
	struct Umweb_exchange_itemtype_count_sc_get_info_Params
	{
	public:
		struct Fmps_exchange_item_count_list                       ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_itemtype_count_sc.alloc_info
	 */
	struct Umweb_exchange_itemtype_count_sc_alloc_info_Params
	{
	public:
		struct Fmps_exchange_item_count_list                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_marketprice_sc.has_info
	 */
	struct Umweb_exchange_marketprice_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_marketprice_sc.get_info
	 */
	struct Umweb_exchange_marketprice_sc_get_info_Params
	{
	public:
		struct Fmps_exchange_market_price                          ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_marketprice_sc.alloc_info
	 */
	struct Umweb_exchange_marketprice_sc_alloc_info_Params
	{
	public:
		struct Fmps_exchange_market_price                          ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_registrant_info_sc.has_info
	 */
	struct Umweb_exchange_registrant_info_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_registrant_info_sc.get_info
	 */
	struct Umweb_exchange_registrant_info_sc_get_info_Params
	{
	public:
		struct Fmps_exchange_registrant_list                       ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_exchange_registrant_info_sc.alloc_info
	 */
	struct Umweb_exchange_registrant_info_sc_alloc_info_Params
	{
	public:
		struct Fmps_exchange_registrant_list                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_game_option_select_sc.has_game_setup
	 */
	struct Umweb_game_option_select_sc_has_game_setup_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_game_option_select_sc.get_game_setup
	 */
	struct Umweb_game_option_select_sc_get_game_setup_Params
	{
	public:
		struct Fmps_game_option                                    ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_game_option_select_sc.alloc_game_setup
	 */
	struct Umweb_game_option_select_sc_alloc_game_setup_Params
	{
	public:
		struct Fmps_game_option                                    ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_game_setup_select_sc.has_game_setup
	 */
	struct Umweb_game_setup_select_sc_has_game_setup_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_game_setup_select_sc.get_game_setup
	 */
	struct Umweb_game_setup_select_sc_get_game_setup_Params
	{
	public:
		struct Fmps_game_setup                                     ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_game_setup_select_sc.alloc_game_setup
	 */
	struct Umweb_game_setup_select_sc_alloc_game_setup_Params
	{
	public:
		struct Fmps_game_setup                                     ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_guild_dungeon_member_damage_sc.has_info
	 */
	struct Umweb_guild_dungeon_member_damage_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_guild_dungeon_member_damage_sc.get_info
	 */
	struct Umweb_guild_dungeon_member_damage_sc_get_info_Params
	{
	public:
		struct Fmps_guild_dungeon_member_damage_info               ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_guild_dungeon_member_damage_sc.alloc_info
	 */
	struct Umweb_guild_dungeon_member_damage_sc_alloc_info_Params
	{
	public:
		struct Fmps_guild_dungeon_member_damage_info               ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_guild_league_rank_sc.has_my_rank
	 */
	struct Umweb_guild_league_rank_sc_has_my_rank_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_guild_league_rank_sc.get_my_rank
	 */
	struct Umweb_guild_league_rank_sc_get_my_rank_Params
	{
	public:
		struct Fmps_guild_league_rank                              ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_guild_league_rank_sc.alloc_my_rank
	 */
	struct Umweb_guild_league_rank_sc_alloc_my_rank_Params
	{
	public:
		struct Fmps_guild_league_rank                              ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_character_select_sc.has_gameinfo
	 */
	struct Umweb_lobby_character_select_sc_has_gameinfo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_character_select_sc.get_gameinfo
	 */
	struct Umweb_lobby_character_select_sc_get_gameinfo_Params
	{
	public:
		struct Fmps_lobby_gameinfo                                 ReturnValue;                                             // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_character_select_sc.alloc_gameinfo
	 */
	struct Umweb_lobby_character_select_sc_alloc_gameinfo_Params
	{
	public:
		struct Fmps_lobby_gameinfo                                 ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_gamelogin_sc.has_player
	 */
	struct Umweb_lobby_gamelogin_sc_has_player_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_gamelogin_sc.has_gameinfo
	 */
	struct Umweb_lobby_gamelogin_sc_has_gameinfo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_gamelogin_sc.get_player
	 */
	struct Umweb_lobby_gamelogin_sc_get_player_Params
	{
	public:
		struct Fmps_lobby_player                                   ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_gamelogin_sc.get_gameinfo
	 */
	struct Umweb_lobby_gamelogin_sc_get_gameinfo_Params
	{
	public:
		struct Fmps_lobby_gameinfo                                 ReturnValue;                                             // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_gamelogin_sc.alloc_player
	 */
	struct Umweb_lobby_gamelogin_sc_alloc_player_Params
	{
	public:
		struct Fmps_lobby_player                                   ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_lobby_gamelogin_sc.alloc_gameinfo
	 */
	struct Umweb_lobby_gamelogin_sc_alloc_gameinfo_Params
	{
	public:
		struct Fmps_lobby_gameinfo                                 ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_login_loginauth_sc.has_server_inspection
	 */
	struct Umweb_login_loginauth_sc_has_server_inspection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_login_loginauth_sc.has_info
	 */
	struct Umweb_login_loginauth_sc_has_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_login_loginauth_sc.get_server_inspection
	 */
	struct Umweb_login_loginauth_sc_get_server_inspection_Params
	{
	public:
		struct Fmps_server_inspection                              ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_login_loginauth_sc.get_info
	 */
	struct Umweb_login_loginauth_sc_get_info_Params
	{
	public:
		struct Fmps_login_account                                  ReturnValue;                                             // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_login_loginauth_sc.alloc_server_inspection
	 */
	struct Umweb_login_loginauth_sc_alloc_server_inspection_Params
	{
	public:
		struct Fmps_server_inspection                              ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_login_loginauth_sc.alloc_info
	 */
	struct Umweb_login_loginauth_sc_alloc_info_Params
	{
	public:
		struct Fmps_login_account                                  ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_mentor_info_sc.has_mentor_info
	 */
	struct Umweb_mentor_info_sc_has_mentor_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_mentor_info_sc.get_mentor_info
	 */
	struct Umweb_mentor_info_sc_get_mentor_info_Params
	{
	public:
		struct Fmps_mentor                                         ReturnValue;                                             // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_mentor_info_sc.alloc_mentor_info
	 */
	struct Umweb_mentor_info_sc_alloc_mentor_info_Params
	{
	public:
		struct Fmps_mentor                                         ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_search_user_sc.has_user_info
	 */
	struct Umweb_search_user_sc_has_user_info_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_search_user_sc.get_user_info
	 */
	struct Umweb_search_user_sc_get_user_info_Params
	{
	public:
		struct Fmps_character_simple_info                          ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_search_user_sc.alloc_user_info
	 */
	struct Umweb_search_user_sc_alloc_user_info_Params
	{
	public:
		struct Fmps_character_simple_info                          ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_alliance_list_sc.has_siege_guild
	 */
	struct Umweb_siege_warfare_alliance_list_sc_has_siege_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_alliance_list_sc.get_siege_guild
	 */
	struct Umweb_siege_warfare_alliance_list_sc_get_siege_guild_Params
	{
	public:
		struct Fmps_siege_warfare_alliance_info                    ReturnValue;                                             // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_alliance_list_sc.alloc_siege_guild
	 */
	struct Umweb_siege_warfare_alliance_list_sc_alloc_siege_guild_Params
	{
	public:
		struct Fmps_siege_warfare_alliance_info                    ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_alliance_receive_list_sc.has_siege_guild
	 */
	struct Umweb_siege_warfare_alliance_receive_list_sc_has_siege_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_alliance_receive_list_sc.get_siege_guild
	 */
	struct Umweb_siege_warfare_alliance_receive_list_sc_get_siege_guild_Params
	{
	public:
		struct Fmps_siege_warfare_alliance_info                    ReturnValue;                                             // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_alliance_receive_list_sc.alloc_siege_guild
	 */
	struct Umweb_siege_warfare_alliance_receive_list_sc_alloc_siege_guild_Params
	{
	public:
		struct Fmps_siege_warfare_alliance_info                    ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_guild_search_sc.has_siege_guild
	 */
	struct Umweb_siege_warfare_guild_search_sc_has_siege_guild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_guild_search_sc.get_siege_guild
	 */
	struct Umweb_siege_warfare_guild_search_sc_get_siege_guild_Params
	{
	public:
		struct Fmps_siege_warfare_alliance_info                    ReturnValue;                                             // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.mweb_siege_warfare_guild_search_sc.alloc_siege_guild
	 */
	struct Umweb_siege_warfare_guild_search_sc_alloc_siege_guild_Params
	{
	public:
		struct Fmps_siege_warfare_alliance_info                    ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProtocolPlugins.ProtocolPluginsBPLibrary.ProtocolPluginsSampleFunction
	 */
	struct UProtocolPluginsBPLibrary_ProtocolPluginsSampleFunction_Params
	{
	public:
		float                                                      Param;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
