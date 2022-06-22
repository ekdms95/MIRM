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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ProtocolPlugins.mpe_recovery_exp_type
	 */
	enum class Empe_recovery_exp_type : uint8_t
	{
		mpe_recovery_exp_type__free                      = 0,
		mpe_recovery_exp_type__normal                    = 1,
		mpe_recovery_exp_type__unique                    = 2,
		mpe_recovery_exp_type__item                      = 3,
		mpe_recovery_exp_type__mpe_recovery_exp_type_end = 4,
		mpe_recovery_exp_type__mpe_recovery_exp_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_cash_exchange_type
	 */
	enum class Empe_cash_exchange_type : uint8_t
	{
		mpe_cash_exchange_type__daily                      = 0,
		mpe_cash_exchange_type__goods                      = 1,
		mpe_cash_exchange_type__item                       = 2,
		mpe_cash_exchange_type__mpe_cash_exchange_type_end = 3,
		mpe_cash_exchange_type__mpe_cash_exchange_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_coupon_type
	 */
	enum class Empe_coupon_type : uint8_t
	{
		mpe_coupon_type__none                = 0,
		mpe_coupon_type__internal_coupon     = 1,
		mpe_coupon_type__external_coupon     = 2,
		mpe_coupon_type__mpe_coupon_type_end = 3,
		mpe_coupon_type__mpe_coupon_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_deploy_version
	 */
	enum class Empe_deploy_version : uint8_t
	{
		mpe_deploy_version__master                 = 0,
		mpe_deploy_version__qa                     = 1,
		mpe_deploy_version__alpha                  = 2,
		mpe_deploy_version__beta                   = 3,
		mpe_deploy_version__ios_review             = 4,
		mpe_deploy_version__google_featured        = 5,
		mpe_deploy_version__live                   = 6,
		mpe_deploy_version__max                    = 7,
		mpe_deploy_version__mpe_deploy_version_end = 8
	};

	/**
	 * Enum ProtocolPlugins.mpe_contents_onoff_type
	 */
	enum class Empe_contents_onoff_type : uint8_t
	{
		mpe_contents_onoff_type__none                        = 0,
		mpe_contents_onoff_type__field                       = 1,
		mpe_contents_onoff_type__indun                       = 2,
		mpe_contents_onoff_type__npc_object                  = 3,
		mpe_contents_onoff_type__exchange                    = 4,
		mpe_contents_onoff_type__mpe_contents_onoff_type_end = 5,
		mpe_contents_onoff_type__mpe_contents_onoff_MAX      = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_collect_result
	 */
	enum class Empe_collect_result : uint8_t
	{
		mpe_collect_result__none                   = 0,
		mpe_collect_result__success                = 1,
		mpe_collect_result__great                  = 2,
		mpe_collect_result__fail                   = 3,
		mpe_collect_result__mpe_collect_result_end = 4,
		mpe_collect_result__mpe_collect_MAX        = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_store_type
	 */
	enum class Empe_store_type : uint8_t
	{
		mpe_store_type__none               = 0,
		mpe_store_type__google_play        = 1,
		mpe_store_type__google_play01      = 2,
		mpe_store_type__apple_store        = 3,
		mpe_store_type__apple_store01      = 4,
		mpe_store_type__window             = 5,
		mpe_store_type__google_play_cbt    = 6,
		mpe_store_type__mpe_store_type_end = 7,
		mpe_store_type__mpe_store_MAX      = 8
	};

	/**
	 * Enum ProtocolPlugins.mpe_channel_type
	 */
	enum class Empe_channel_type : uint8_t
	{
		mpe_channel_type__none                 = 0,
		mpe_channel_type__guest                = 1,
		mpe_channel_type__google               = 2,
		mpe_channel_type__facebook             = 3,
		mpe_channel_type__apple                = 4,
		mpe_channel_type__kakao                = 5,
		mpe_channel_type__stream               = 6,
		mpe_channel_type__bot                  = 7,
		mpe_channel_type__mpe_channel_type_end = 8,
		mpe_channel_type__mpe_channel_MAX      = 9
	};

	/**
	 * Enum ProtocolPlugins.mpe_os_type
	 */
	enum class Empe_os_type : uint8_t
	{
		mpe_os_type__none            = 0,
		mpe_os_type__os_android      = 1,
		mpe_os_type__os_ios          = 2,
		mpe_os_type__os_windows      = 3,
		mpe_os_type__os_all          = 4,
		mpe_os_type__mpe_os_type_end = 5,
		mpe_os_type__mpe_os_MAX      = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_mandala_type
	 */
	enum class Empe_mandala_type : uint8_t
	{
		mpe_mandala_type__none                 = 0,
		mpe_mandala_type__character            = 1,
		mpe_mandala_type__master               = 2,
		mpe_mandala_type__mpe_mandala_type_end = 3,
		mpe_mandala_type__mpe_mandala_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_goods
	 */
	enum class Empe_guild_goods : uint8_t
	{
		mpe_guild_goods__none                = 0,
		mpe_guild_goods__gold                = 1,
		mpe_guild_goods__exp                 = 2,
		mpe_guild_goods__black_iron          = 3,
		mpe_guild_goods__goldingot           = 4,
		mpe_guild_goods__max                 = 5,
		mpe_guild_goods__mpe_guild_goods_end = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_indun_mornach_state
	 */
	enum class Empe_indun_mornach_state : uint8_t
	{
		mpe_indun_mornach_state__none                        = 0,
		mpe_indun_mornach_state__start_count                 = 1,
		mpe_indun_mornach_state__start                       = 2,
		mpe_indun_mornach_state__end                         = 3,
		mpe_indun_mornach_state__mpe_indun_mornach_state_end = 4,
		mpe_indun_mornach_state__mpe_indun_mornach_MAX       = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_character_battle_state
	 */
	enum class Empe_character_battle_state : uint8_t
	{
		mpe_character_battle_state__none                           = 0,
		mpe_character_battle_state__battle                         = 1,
		mpe_character_battle_state__mpe_character_battle_state_end = 2,
		mpe_character_battle_state__mpe_character_battle_MAX       = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_arena_battle_alert
	 */
	enum class Empe_arena_battle_alert : uint8_t
	{
		mpe_arena_battle_alert__none                       = 0,
		mpe_arena_battle_alert__cutscene                   = 1,
		mpe_arena_battle_alert__battle_start               = 2,
		mpe_arena_battle_alert__battle_result              = 3,
		mpe_arena_battle_alert__mpe_arena_battle_alert_end = 4,
		mpe_arena_battle_alert__mpe_arena_battle_MAX       = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_occupation_state
	 */
	enum class Empe_occupation_state : uint8_t
	{
		mpe_occupation_state__none                     = 0,
		mpe_occupation_state__activating               = 1,
		mpe_occupation_state__immune                   = 2,
		mpe_occupation_state__mpe_occupation_state_end = 3,
		mpe_occupation_state__mpe_occupation_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_demon_summon_state
	 */
	enum class Empe_demon_summon_state : uint8_t
	{
		mpe_demon_summon_state__none                       = 0,
		mpe_demon_summon_state__activate_start             = 1,
		mpe_demon_summon_state__activating                 = 2,
		mpe_demon_summon_state__boss_summon                = 3,
		mpe_demon_summon_state__activate_end               = 4,
		mpe_demon_summon_state__mpe_demon_summon_state_end = 5,
		mpe_demon_summon_state__mpe_demon_summon_MAX       = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_seal_device_state
	 */
	enum class Empe_seal_device_state : uint8_t
	{
		mpe_seal_device_state__none                      = 0,
		mpe_seal_device_state__activating                = 1,
		mpe_seal_device_state__awaiting                  = 2,
		mpe_seal_device_state__mpe_seal_device_state_end = 3,
		mpe_seal_device_state__mpe_seal_device_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_secretvalley_state
	 */
	enum class Empe_secretvalley_state : uint8_t
	{
		mpe_secretvalley_state__none                       = 0,
		mpe_secretvalley_state__init                       = 1,
		mpe_secretvalley_state__play                       = 2,
		mpe_secretvalley_state__finish                     = 3,
		mpe_secretvalley_state__destroy_pre                = 4,
		mpe_secretvalley_state__destroy                    = 5,
		mpe_secretvalley_state__destroy_move_pre           = 6,
		mpe_secretvalley_state__restart                    = 7,
		mpe_secretvalley_state__victory                    = 8,
		mpe_secretvalley_state__max                        = 9,
		mpe_secretvalley_state__mpe_secretvalley_state_end = 10
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_share_storage_log
	 */
	enum class Empe_guild_share_storage_log : uint8_t
	{
		mpe_guild_share_storage_log__none                            = 0,
		mpe_guild_share_storage_log__town_get                        = 1,
		mpe_guild_share_storage_log__town_return                     = 2,
		mpe_guild_share_storage_log__item_in_storage                 = 3,
		mpe_guild_share_storage_log__item_get_request                = 4,
		mpe_guild_share_storage_log__item_get                        = 5,
		mpe_guild_share_storage_log__max                             = 6,
		mpe_guild_share_storage_log__mpe_guild_share_storage_log_end = 7
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_mark_index
	 */
	enum class Empe_guild_mark_index : uint8_t
	{
		mpe_guild_mark_index__mark                     = 0,
		mpe_guild_mark_index__background               = 1,
		mpe_guild_mark_index__color                    = 2,
		mpe_guild_mark_index__max                      = 3,
		mpe_guild_mark_index__mpe_guild_mark_index_end = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_avatar_pos
	 */
	enum class Empe_avatar_pos : uint8_t
	{
		mpe_avatar_pos__none               = 0,
		mpe_avatar_pos__one                = 1,
		mpe_avatar_pos__two                = 2,
		mpe_avatar_pos__three              = 3,
		mpe_avatar_pos__four               = 4,
		mpe_avatar_pos__five               = 5,
		mpe_avatar_pos__six                = 6,
		mpe_avatar_pos__seven              = 7,
		mpe_avatar_pos__eight              = 8,
		mpe_avatar_pos__nine               = 9,
		mpe_avatar_pos__max                = 10,
		mpe_avatar_pos__mpe_avatar_pos_end = 11
	};

	/**
	 * Enum ProtocolPlugins.mpe_seasonpass_reward_type
	 */
	enum class Empe_seasonpass_reward_type : uint8_t
	{
		mpe_seasonpass_reward_type__daily                          = 0,
		mpe_seasonpass_reward_type__free                           = 1,
		mpe_seasonpass_reward_type__pass                           = 2,
		mpe_seasonpass_reward_type__mpe_seasonpass_reward_type_end = 3,
		mpe_seasonpass_reward_type__mpe_seasonpass_reward_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_challenge_state
	 */
	enum class Empe_challenge_state : uint8_t
	{
		mpe_challenge_state__none                    = 0,
		mpe_challenge_state__completed               = 1,
		mpe_challenge_state__repeat                  = 2,
		mpe_challenge_state__mpe_challenge_state_end = 3,
		mpe_challenge_state__mpe_challenge_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_pet_team
	 */
	enum class Empe_pet_team : uint8_t
	{
		mpe_pet_team__first            = 0,
		mpe_pet_team__second           = 1,
		mpe_pet_team__third            = 2,
		mpe_pet_team__max              = 3,
		mpe_pet_team__mpe_pet_team_end = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_rank_type
	 */
	enum class Empe_guild_rank_type : uint8_t
	{
		mpe_guild_rank_type__shipwar                 = 0,
		mpe_guild_rank_type__mpe_guild_rank_type_end = 1,
		mpe_guild_rank_type__mpe_guild_rank_MAX      = 2
	};

	/**
	 * Enum ProtocolPlugins.mpe_pickup_item_type
	 */
	enum class Empe_pickup_item_type : uint8_t
	{
		mpe_pickup_item_type__none                     = 0,
		mpe_pickup_item_type__gold                     = 1,
		mpe_pickup_item_type__exp                      = 2,
		mpe_pickup_item_type__boss_point               = 3,
		mpe_pickup_item_type__item                     = 4,
		mpe_pickup_item_type__mpe_pickup_item_type_end = 5,
		mpe_pickup_item_type__mpe_pickup_item_MAX      = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_shipwar_team
	 */
	enum class Empe_guild_shipwar_team : uint8_t
	{
		mpe_guild_shipwar_team__none                       = 0,
		mpe_guild_shipwar_team__team_a                     = 1,
		mpe_guild_shipwar_team__team_b                     = 2,
		mpe_guild_shipwar_team__team_all                   = 3,
		mpe_guild_shipwar_team__mpe_guild_shipwar_team_end = 4,
		mpe_guild_shipwar_team__mpe_guild_shipwar_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_shipwar_message
	 */
	enum class Empe_guild_shipwar_message : uint8_t
	{
		mpe_guild_shipwar_message__none                          = 0,
		mpe_guild_shipwar_message__guild_shipwar_start           = 1,
		mpe_guild_shipwar_message__victory_check_start           = 2,
		mpe_guild_shipwar_message__victory_check_stop            = 3,
		mpe_guild_shipwar_message__guild_shipwar_end             = 4,
		mpe_guild_shipwar_message__mpe_guild_shipwar_message_end = 5,
		mpe_guild_shipwar_message__mpe_guild_shipwar_MAX         = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_shipwar_time_type
	 */
	enum class Empe_shipwar_time_type : uint8_t
	{
		mpe_shipwar_time_type__wait_time                 = 0,
		mpe_shipwar_time_type__play_time                 = 1,
		mpe_shipwar_time_type__vitory_check_time         = 2,
		mpe_shipwar_time_type__end_time                  = 3,
		mpe_shipwar_time_type__mpe_shipwar_time_type_end = 4,
		mpe_shipwar_time_type__mpe_shipwar_time_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_shipwar_character_state
	 */
	enum class Empe_guild_shipwar_character_state : uint8_t
	{
		mpe_guild_shipwar_character_state__battle                                = 0,
		mpe_guild_shipwar_character_state__leave                                 = 1,
		mpe_guild_shipwar_character_state__revival                               = 2,
		mpe_guild_shipwar_character_state__mpe_guild_shipwar_character_state_end = 3,
		mpe_guild_shipwar_character_state__mpe_guild_shipwar_character_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_match_state
	 */
	enum class Empe_match_state : uint8_t
	{
		mpe_match_state__request             = 0,
		mpe_match_state__unrequest           = 1,
		mpe_match_state__matching            = 2,
		mpe_match_state__ready               = 3,
		mpe_match_state__mpe_match_state_end = 4,
		mpe_match_state__mpe_match_MAX       = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_shipwar_state
	 */
	enum class Empe_guild_shipwar_state : uint8_t
	{
		mpe_guild_shipwar_state__request                     = 0,
		mpe_guild_shipwar_state__match                       = 1,
		mpe_guild_shipwar_state__match_end                   = 2,
		mpe_guild_shipwar_state__enter_start                 = 3,
		mpe_guild_shipwar_state__enter_end                   = 4,
		mpe_guild_shipwar_state__indun_complete              = 5,
		mpe_guild_shipwar_state__mpe_guild_shipwar_state_end = 6,
		mpe_guild_shipwar_state__mpe_guild_shipwar_MAX       = 7
	};

	/**
	 * Enum ProtocolPlugins.mpe_ai_setup_config_pos
	 */
	enum class Empe_ai_setup_config_pos : uint8_t
	{
		mpe_ai_setup_config_pos__hp_potion_buy               = 0,
		mpe_ai_setup_config_pos__mp_potion_buy               = 1,
		mpe_ai_setup_config_pos__pickup_hp_potion            = 2,
		mpe_ai_setup_config_pos__pickup_mp_potion            = 3,
		mpe_ai_setup_config_pos__pickup_gold                 = 4,
		mpe_ai_setup_config_pos__item_decompose              = 5,
		mpe_ai_setup_config_pos__item_sell                   = 6,
		mpe_ai_setup_config_pos__item_repair                 = 7,
		mpe_ai_setup_config_pos__townreturn_revive           = 8,
		mpe_ai_setup_config_pos__townreturn_inven_full       = 9,
		mpe_ai_setup_config_pos__townreturn_need_repair      = 10,
		mpe_ai_setup_config_pos__townreturn_lack_hp          = 11,
		mpe_ai_setup_config_pos__townreturn_lack_mp          = 12,
		mpe_ai_setup_config_pos__max                         = 13,
		mpe_ai_setup_config_pos__mpe_ai_setup_config_pos_end = 14
	};

	/**
	 * Enum ProtocolPlugins.mpe_adult_grade
	 */
	enum class Empe_adult_grade : uint8_t
	{
		mpe_adult_grade__kids                = 0,
		mpe_adult_grade__youth               = 1,
		mpe_adult_grade__teenager            = 2,
		mpe_adult_grade__adult               = 3,
		mpe_adult_grade__mpe_adult_grade_end = 4,
		mpe_adult_grade__mpe_adult_MAX       = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_type
	 */
	enum class Empe_guild_type : uint8_t
	{
		mpe_guild_type__none               = 0,
		mpe_guild_type__normal             = 1,
		mpe_guild_type__beginner           = 2,
		mpe_guild_type__mpe_guild_type_end = 3,
		mpe_guild_type__mpe_guild_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_reinforce_result
	 */
	enum class Empe_reinforce_result : uint8_t
	{
		mpe_reinforce_result__none                       = 0,
		mpe_reinforce_result__reinforce_success          = 1,
		mpe_reinforce_result__reinforce_fail             = 2,
		mpe_reinforce_result__reinforce_fail_destruction = 3,
		mpe_reinforce_result__reinforce_success_big      = 4,
		mpe_reinforce_result__reinforce_success_best     = 5,
		mpe_reinforce_result__mpe_reinforce_result_end   = 6,
		mpe_reinforce_result__mpe_reinforce_MAX          = 7
	};

	/**
	 * Enum ProtocolPlugins.mpe_reinforce_stone_type
	 */
	enum class Empe_reinforce_stone_type : uint8_t
	{
		mpe_reinforce_stone_type__normal_stone                 = 0,
		mpe_reinforce_stone_type__bless_stone                  = 1,
		mpe_reinforce_stone_type__mpe_reinforce_stone_type_end = 2,
		mpe_reinforce_stone_type__mpe_reinforce_stone_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_teleport_type
	 */
	enum class Empe_teleport_type : uint8_t
	{
		mpe_teleport_type__view_point_teleport       = 0,
		mpe_teleport_type__obj_point_teleport        = 1,
		mpe_teleport_type__move_teleport             = 2,
		mpe_teleport_type__occupation_tower_teleport = 3,
		mpe_teleport_type__mpe_teleport_type_end     = 4,
		mpe_teleport_type__mpe_teleport_MAX          = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_wanted_murder_trace
	 */
	enum class Empe_wanted_murder_trace : uint8_t
	{
		mpe_wanted_murder_trace__online                      = 0,
		mpe_wanted_murder_trace__offline                     = 1,
		mpe_wanted_murder_trace__untraceable                 = 2,
		mpe_wanted_murder_trace__mpe_wanted_murder_trace_end = 3,
		mpe_wanted_murder_trace__mpe_wanted_murder_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_view_point_tel_type
	 */
	enum class Empe_view_point_tel_type : uint8_t
	{
		mpe_view_point_tel_type__auto_hunt                   = 0,
		mpe_view_point_tel_type__instand_move                = 1,
		mpe_view_point_tel_type__mpe_view_point_tel_type_end = 2,
		mpe_view_point_tel_type__mpe_view_point_tel_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_costume_show
	 */
	enum class Empe_costume_show : uint8_t
	{
		mpe_costume_show__show                 = 0,
		mpe_costume_show__hide                 = 1,
		mpe_costume_show__mpe_costume_show_end = 2,
		mpe_costume_show__mpe_costume_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_dictionary_type
	 */
	enum class Empe_dictionary_type : uint8_t
	{
		mpe_dictionary_type__none                    = 0,
		mpe_dictionary_type__monster                 = 1,
		mpe_dictionary_type__item                    = 2,
		mpe_dictionary_type__pet                     = 3,
		mpe_dictionary_type__localcollect            = 4,
		mpe_dictionary_type__loststory               = 5,
		mpe_dictionary_type__viewpoint               = 6,
		mpe_dictionary_type__npcInmacy               = 7,
		mpe_dictionary_type__first_kill              = 8,
		mpe_dictionary_type__max                     = 9,
		mpe_dictionary_type__mpe_dictionary_type_end = 10
	};

	/**
	 * Enum ProtocolPlugins.mpe_clinet_platform
	 */
	enum class Empe_clinet_platform : uint8_t
	{
		mpe_clinet_platform__mobile                  = 0,
		mpe_clinet_platform__pc                      = 1,
		mpe_clinet_platform__mpe_clinet_platform_end = 2,
		mpe_clinet_platform__mpe_clinet_MAX          = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_ranking_type
	 */
	enum class Empe_ranking_type : uint8_t
	{
		mpe_ranking_type__none                    = 0,
		mpe_ranking_type__personal_power_total    = 1,
		mpe_ranking_type__personal_power_warrior  = 2,
		mpe_ranking_type__personal_power_wizard   = 3,
		mpe_ranking_type__personal_power_taoist   = 4,
		mpe_ranking_type__personal_level_total    = 5,
		mpe_ranking_type__personal_level_warrior  = 6,
		mpe_ranking_type__personal_level_wizard   = 7,
		mpe_ranking_type__personal_level_taoist   = 8,
		mpe_ranking_type__guild_all               = 9,
		mpe_ranking_type__mining                  = 10,
		mpe_ranking_type__gather                  = 11,
		mpe_ranking_type__fishing                 = 12,
		mpe_ranking_type__blacksmith              = 13,
		mpe_ranking_type__alchemy                 = 14,
		mpe_ranking_type__handwork                = 15,
		mpe_ranking_type__reinforce               = 16,
		mpe_ranking_type__enchant                 = 17,
		mpe_ranking_type__luck                    = 18,
		mpe_ranking_type__max                     = 19,
		mpe_ranking_type__character_power_total   = 20,
		mpe_ranking_type__character_power_warrior = 21,
		mpe_ranking_type__character_power_wizard  = 22,
		mpe_ranking_type__character_power_taoist  = 23,
		mpe_ranking_type__character_level_total   = 24,
		mpe_ranking_type__character_level_warrior = 25,
		mpe_ranking_type__character_level_wizard  = 26,
		mpe_ranking_type__character_level_taoist  = 27,
		mpe_ranking_type__guild_total             = 28,
		mpe_ranking_type__profesion_mining        = 29,
		mpe_ranking_type__profesion_gather        = 30,
		mpe_ranking_type__profesion_fishing       = 31,
		mpe_ranking_type__profesion_blacksmith    = 32,
		mpe_ranking_type__profesion_alchemy       = 33,
		mpe_ranking_type__profesion_handwork      = 34,
		mpe_ranking_type__profesion_reinforce     = 35,
		mpe_ranking_type__profesion_enchant       = 36,
		mpe_ranking_type__profesion_luck          = 37,
		mpe_ranking_type__mpe_ranking_type_end    = 38
	};

	/**
	 * Enum ProtocolPlugins.mpe_mentor_request_type
	 */
	enum class Empe_mentor_request_type : uint8_t
	{
		mpe_mentor_request_type__request                     = 0,
		mpe_mentor_request_type__request_accept              = 1,
		mpe_mentor_request_type__request_cancel              = 2,
		mpe_mentor_request_type__request_refusal             = 3,
		mpe_mentor_request_type__request_disband             = 4,
		mpe_mentor_request_type__mpe_mentor_request_type_end = 5,
		mpe_mentor_request_type__mpe_mentor_request_MAX      = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_mentor_type
	 */
	enum class Empe_mentor_type : uint8_t
	{
		mpe_mentor_type__mentor              = 0,
		mpe_mentor_type__mentee              = 1,
		mpe_mentor_type__mpe_mentor_type_end = 2,
		mpe_mentor_type__mpe_mentor_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_friend_type
	 */
	enum class Empe_friend_type : uint8_t
	{
		mpe_friend_type__in_game             = 0,
		mpe_friend_type__mpe_friend_type_end = 1,
		mpe_friend_type__mpe_friend_MAX      = 2
	};

	/**
	 * Enum ProtocolPlugins.mpe_pk_revenge_trace
	 */
	enum class Empe_pk_revenge_trace : uint8_t
	{
		mpe_pk_revenge_trace__not_found                = 0,
		mpe_pk_revenge_trace__connect                  = 1,
		mpe_pk_revenge_trace__disconnect               = 2,
		mpe_pk_revenge_trace__is_found                 = 3,
		mpe_pk_revenge_trace__mpe_pk_revenge_trace_end = 4,
		mpe_pk_revenge_trace__mpe_pk_revenge_MAX       = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_dead_reason
	 */
	enum class Empe_dead_reason : uint8_t
	{
		mpe_dead_reason__normal              = 0,
		mpe_dead_reason__immediate           = 1,
		mpe_dead_reason__on_the_wall         = 2,
		mpe_dead_reason__trigger_dead        = 3,
		mpe_dead_reason__mpe_dead_reason_end = 4,
		mpe_dead_reason__mpe_dead_MAX        = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_siege_message
	 */
	enum class Empe_siege_message : uint8_t
	{
		mpe_siege_message__none                              = 0,
		mpe_siege_message__siege_warfare_start               = 1,
		mpe_siege_message__destroy_left_wall                 = 2,
		mpe_siege_message__destroy_center_wall               = 3,
		mpe_siege_message__destroy_right_wall                = 4,
		mpe_siege_message__gate_open_siege_tower             = 5,
		mpe_siege_message__guard_tower_all_destroy           = 6,
		mpe_siege_message__destroy_left_1_guard_tower        = 7,
		mpe_siege_message__destroy_left_2_guard_tower        = 8,
		mpe_siege_message__destroy_right_1_guard_tower       = 9,
		mpe_siege_message__victory_check_start               = 10,
		mpe_siege_message__siege_warfare_endtime_one_minutes = 11,
		mpe_siege_message__victory_atk                       = 12,
		mpe_siege_message__victory_def                       = 13,
		mpe_siege_message__owner_guild_alert                 = 14,
		mpe_siege_message__victory_time                      = 15,
		mpe_siege_message__destroy_right_2_guard_tower       = 16,
		mpe_siege_message__destroy_victory_object            = 17,
		mpe_siege_message__mpe_siege_message_end             = 18,
		mpe_siege_message__mpe_siege_MAX                     = 19
	};

	/**
	 * Enum ProtocolPlugins.mpe_vehicle_expire_type
	 */
	enum class Empe_vehicle_expire_type : uint8_t
	{
		mpe_vehicle_expire_type__satiety                     = 0,
		mpe_vehicle_expire_type__date                        = 1,
		mpe_vehicle_expire_type__mpe_vehicle_expire_type_end = 2,
		mpe_vehicle_expire_type__mpe_vehicle_expire_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_vehicle_food_use
	 */
	enum class Empe_vehicle_food_use : uint8_t
	{
		mpe_vehicle_food_use__use                      = 0,
		mpe_vehicle_food_use__max_use                  = 1,
		mpe_vehicle_food_use__mpe_vehicle_food_use_end = 2,
		mpe_vehicle_food_use__mpe_vehicle_food_MAX     = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_pet_pos
	 */
	enum class Empe_pet_pos : uint8_t
	{
		mpe_pet_pos__first           = 0,
		mpe_pet_pos__second          = 1,
		mpe_pet_pos__third           = 2,
		mpe_pet_pos__max             = 3,
		mpe_pet_pos__mpe_pet_pos_end = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_siege_team_index
	 */
	enum class Empe_siege_team_index : uint8_t
	{
		mpe_siege_team_index__def_team                 = 0,
		mpe_siege_team_index__atk_team                 = 1,
		mpe_siege_team_index__observer                 = 2,
		mpe_siege_team_index__mpe_siege_team_index_end = 3,
		mpe_siege_team_index__mpe_siege_team_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_object_type
	 */
	enum class Empe_object_type : uint8_t
	{
		mpe_object_type__character           = 0,
		mpe_object_type__monster             = 1,
		mpe_object_type__drop_item           = 2,
		mpe_object_type__collect             = 3,
		mpe_object_type__npc                 = 4,
		mpe_object_type__character_minion    = 5,
		mpe_object_type__siege_weapon        = 6,
		mpe_object_type__fixed_object        = 7,
		mpe_object_type__mercenary           = 8,
		mpe_object_type__treasure_box        = 9,
		mpe_object_type__war_flag            = 10,
		mpe_object_type__lord_statue         = 11,
		mpe_object_type__occupation_tower    = 12,
		mpe_object_type__seal_device         = 13,
		mpe_object_type__demon_summon        = 14,
		mpe_object_type__street_stall        = 15,
		mpe_object_type__max                 = 16,
		mpe_object_type__mpe_object_type_end = 17
	};

	/**
	 * Enum ProtocolPlugins.mpe_castle_town_specialties_pos
	 */
	enum class Empe_castle_town_specialties_pos : uint8_t
	{
		mpe_castle_town_specialties_pos__orchard                             = 0,
		mpe_castle_town_specialties_pos__grove                               = 1,
		mpe_castle_town_specialties_pos__farm                                = 2,
		mpe_castle_town_specialties_pos__max                                 = 3,
		mpe_castle_town_specialties_pos__mpe_castle_town_specialties_pos_end = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_upgrade_state
	 */
	enum class Empe_upgrade_state : uint8_t
	{
		mpe_upgrade_state__success               = 0,
		mpe_upgrade_state__normal                = 1,
		mpe_upgrade_state__fail                  = 2,
		mpe_upgrade_state__destory               = 3,
		mpe_upgrade_state__mpe_upgrade_state_end = 4,
		mpe_upgrade_state__mpe_upgrade_MAX       = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_castle_town_change_rental_fee_state
	 */
	enum class Empe_castle_town_change_rental_fee_state : uint8_t
	{
		mpe_castle_town_change_rental_fee_state__none                                        = 0,
		mpe_castle_town_change_rental_fee_state__req_castle_owner                            = 1,
		mpe_castle_town_change_rental_fee_state__req_town_owner                              = 2,
		mpe_castle_town_change_rental_fee_state__mpe_castle_town_change_rental_fee_state_end = 3,
		mpe_castle_town_change_rental_fee_state__mpe_castle_town_change_rental_fee_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_castle_town_work_type
	 */
	enum class Empe_castle_town_work_type : uint8_t
	{
		mpe_castle_town_work_type__none                          = 0,
		mpe_castle_town_work_type__house_build                   = 1,
		mpe_castle_town_work_type__house_build_cancel            = 2,
		mpe_castle_town_work_type__house_levelup                 = 3,
		mpe_castle_town_work_type__house_levelup_cancel          = 4,
		mpe_castle_town_work_type__mpe_castle_town_work_type_end = 5,
		mpe_castle_town_work_type__mpe_castle_town_work_MAX      = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_siege_warfare_machine_type
	 */
	enum class Empe_siege_warfare_machine_type : uint8_t
	{
		mpe_siege_warfare_machine_type__atk_machine                        = 0,
		mpe_siege_warfare_machine_type__def_machine                        = 1,
		mpe_siege_warfare_machine_type__mpe_siege_warfare_machine_type_end = 2,
		mpe_siege_warfare_machine_type__mpe_siege_warfare_machine_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_siege_warfare_machine_position
	 */
	enum class Empe_siege_warfare_machine_position : uint8_t
	{
		mpe_siege_warfare_machine_position__siege_weapon                           = 0,
		mpe_siege_warfare_machine_position__castle_guardian                        = 1,
		mpe_siege_warfare_machine_position__mercenary                              = 2,
		mpe_siege_warfare_machine_position__barricade                              = 3,
		mpe_siege_warfare_machine_position__mpe_siege_warfare_machine_position_end = 4,
		mpe_siege_warfare_machine_position__mpe_siege_warfare_machine_MAX          = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_chat_system
	 */
	enum class Empe_chat_system : uint8_t
	{
		mpe_chat_system__notice_msg              = 0,
		mpe_chat_system__get_exp                 = 1,
		mpe_chat_system__get_goods               = 2,
		mpe_chat_system__pickup_item             = 3,
		mpe_chat_system__dead_char               = 4,
		mpe_chat_system__make_item               = 5,
		mpe_chat_system__up_item                 = 6,
		mpe_chat_system__bs_item                 = 7,
		mpe_chat_system__get_pet                 = 8,
		mpe_chat_system__get_vehicle             = 9,
		mpe_chat_system__use_box_item            = 10,
		mpe_chat_system__wanted_murder_new       = 11,
		mpe_chat_system__wanted_murder_change    = 12,
		mpe_chat_system__wanted_murder_kill      = 13,
		mpe_chat_system__castle_tax_rate         = 14,
		mpe_chat_system__siege_result            = 15,
		mpe_chat_system__lord_bless              = 16,
		mpe_chat_system__secretvalley_noti       = 17,
		mpe_chat_system__system_rolling          = 18,
		mpe_chat_system__system_rolling_chatting = 19,
		mpe_chat_system__system_chatting         = 20,
		mpe_chat_system__system_world            = 21,
		mpe_chat_system__system_guild            = 22,
		mpe_chat_system__system_party            = 23,
		mpe_chat_system__reserved_mail           = 24,
		mpe_chat_system__get_pet_mix             = 25,
		mpe_chat_system__get_reflection          = 26,
		mpe_chat_system__get_reflection_mix      = 27,
		mpe_chat_system__enchant_stone           = 28,
		mpe_chat_system__world_boss_noti         = 29,
		mpe_chat_system__siege_noti              = 30,
		mpe_chat_system__treasure_box_open       = 31,
		mpe_chat_system__field_boss_noti         = 32,
		mpe_chat_system__mpe_chat_system_end     = 33,
		mpe_chat_system__mpe_chat_MAX            = 34
	};

	/**
	 * Enum ProtocolPlugins.mpe_castle_town_detail_pos
	 */
	enum class Empe_castle_town_detail_pos : uint8_t
	{
		mpe_castle_town_detail_pos__home                           = 0,
		mpe_castle_town_detail_pos__dungeon                        = 1,
		mpe_castle_town_detail_pos__storage                        = 2,
		mpe_castle_town_detail_pos__training_center                = 3,
		mpe_castle_town_detail_pos__quest_office                   = 4,
		mpe_castle_town_detail_pos__blacksmith                     = 5,
		mpe_castle_town_detail_pos__alchemy                        = 6,
		mpe_castle_town_detail_pos__cooking                        = 7,
		mpe_castle_town_detail_pos__arsenal                        = 8,
		mpe_castle_town_detail_pos__orchard                        = 9,
		mpe_castle_town_detail_pos__grove                          = 10,
		mpe_castle_town_detail_pos__farm                           = 11,
		mpe_castle_town_detail_pos__dinner                         = 12,
		mpe_castle_town_detail_pos__max                            = 13,
		mpe_castle_town_detail_pos__mpe_castle_town_detail_pos_end = 14
	};

	/**
	 * Enum ProtocolPlugins.mpe_castle_tax_distribution
	 */
	enum class Empe_castle_tax_distribution : uint8_t
	{
		mpe_castle_tax_distribution__equal                           = 0,
		mpe_castle_tax_distribution__differential                    = 1,
		mpe_castle_tax_distribution__mpe_castle_tax_distribution_end = 2,
		mpe_castle_tax_distribution__mpe_castle_tax_MAX              = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_siege_alert_type
	 */
	enum class Empe_siege_alert_type : uint8_t
	{
		mpe_siege_alert_type__return_tender            = 0,
		mpe_siege_alert_type__divide_tender            = 1,
		mpe_siege_alert_type__alliance_request         = 2,
		mpe_siege_alert_type__alliance_accept          = 3,
		mpe_siege_alert_type__alliance_reject          = 4,
		mpe_siege_alert_type__alliance_kickout         = 5,
		mpe_siege_alert_type__alliance_withdrawal      = 6,
		mpe_siege_alert_type__mpe_siege_alert_type_end = 7,
		mpe_siege_alert_type__mpe_siege_alert_MAX      = 8
	};

	/**
	 * Enum ProtocolPlugins.mpe_siege_submit_tender_result
	 */
	enum class Empe_siege_submit_tender_result : uint8_t
	{
		mpe_siege_submit_tender_result__error                              = 0,
		mpe_siege_submit_tender_result__ok                                 = 1,
		mpe_siege_submit_tender_result__change_tender                      = 2,
		mpe_siege_submit_tender_result__lack_money                         = 3,
		mpe_siege_submit_tender_result__no_permission                      = 4,
		mpe_siege_submit_tender_result__already_first                      = 5,
		mpe_siege_submit_tender_result__lack_level                         = 6,
		mpe_siege_submit_tender_result__mpe_siege_submit_tender_result_end = 7,
		mpe_siege_submit_tender_result__mpe_siege_submit_tender_MAX        = 8
	};

	/**
	 * Enum ProtocolPlugins.mpe_siege_castle_type
	 */
	enum class Empe_siege_castle_type : uint8_t
	{
		mpe_siege_castle_type__none                      = 0,
		mpe_siege_castle_type__sabuk                     = 1,
		mpe_siege_castle_type__kilung                    = 2,
		mpe_siege_castle_type__max                       = 3,
		mpe_siege_castle_type__mpe_siege_castle_type_end = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_siege_warfare_state
	 */
	enum class Empe_siege_warfare_state : uint8_t
	{
		mpe_siege_warfare_state__none                        = 0,
		mpe_siege_warfare_state__wait                        = 1,
		mpe_siege_warfare_state__tender                      = 2,
		mpe_siege_warfare_state__tender_finish               = 3,
		mpe_siege_warfare_state__prepare                     = 4,
		mpe_siege_warfare_state__prepare_finish              = 5,
		mpe_siege_warfare_state__enter                       = 6,
		mpe_siege_warfare_state__enter_finish                = 7,
		mpe_siege_warfare_state__battle                      = 8,
		mpe_siege_warfare_state__battle_finish               = 9,
		mpe_siege_warfare_state__mpe_siege_warfare_state_end = 10,
		mpe_siege_warfare_state__mpe_siege_warfare_MAX       = 11
	};

	/**
	 * Enum ProtocolPlugins.mpe_redirect_type
	 */
	enum class Empe_redirect_type : uint8_t
	{
		mpe_redirect_type__none                  = 0,
		mpe_redirect_type__zone                  = 1,
		mpe_redirect_type__indun                 = 2,
		mpe_redirect_type__party_teleport        = 3,
		mpe_redirect_type__mpe_redirect_type_end = 4,
		mpe_redirect_type__mpe_redirect_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_join_type
	 */
	enum class Empe_guild_join_type : uint8_t
	{
		mpe_guild_join_type__free_join               = 0,
		mpe_guild_join_type__need_accept             = 1,
		mpe_guild_join_type__mpe_guild_join_type_end = 2,
		mpe_guild_join_type__mpe_guild_join_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_war_state
	 */
	enum class Empe_guild_war_state : uint8_t
	{
		mpe_guild_war_state__in_progress             = 0,
		mpe_guild_war_state__finished                = 1,
		mpe_guild_war_state__negotiating             = 2,
		mpe_guild_war_state__mpe_guild_war_state_end = 3,
		mpe_guild_war_state__mpe_guild_war_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_db_skill_type
	 */
	enum class Empe_db_skill_type : uint8_t
	{
		mpe_db_skill_type__none                  = 0,
		mpe_db_skill_type__active                = 1,
		mpe_db_skill_type__passive_force         = 2,
		mpe_db_skill_type__special_move          = 3,
		mpe_db_skill_type__mpe_db_skill_type_end = 4,
		mpe_db_skill_type__mpe_db_skill_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_daily_reset_time_type
	 */
	enum class Empe_daily_reset_time_type : uint8_t
	{
		mpe_daily_reset_time_type__none                          = 0,
		mpe_daily_reset_time_type__repute_quest_finish_count     = 1,
		mpe_daily_reset_time_type__repute_quest_daily            = 2,
		mpe_daily_reset_time_type__mpe_daily_reset_time_type_end = 3,
		mpe_daily_reset_time_type__mpe_daily_reset_time_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_item_durability_repair_type
	 */
	enum class Empe_item_durability_repair_type : uint8_t
	{
		mpe_item_durability_repair_type__none                                = 0,
		mpe_item_durability_repair_type__repair                              = 1,
		mpe_item_durability_repair_type__recovery                            = 2,
		mpe_item_durability_repair_type__repair_all                          = 3,
		mpe_item_durability_repair_type__mpe_item_durability_repair_type_end = 4,
		mpe_item_durability_repair_type__mpe_item_durability_repair_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_item_durability_decrement_type
	 */
	enum class Empe_item_durability_decrement_type : uint8_t
	{
		mpe_item_durability_decrement_type__none                                   = 0,
		mpe_item_durability_decrement_type__attack                                 = 1,
		mpe_item_durability_decrement_type__hit                                    = 2,
		mpe_item_durability_decrement_type__dead                                   = 3,
		mpe_item_durability_decrement_type__mining                                 = 4,
		mpe_item_durability_decrement_type__logging                                = 5,
		mpe_item_durability_decrement_type__fishing                                = 6,
		mpe_item_durability_decrement_type__mpe_item_durability_decrement_type_end = 7,
		mpe_item_durability_decrement_type__mpe_item_durability_decrement_MAX      = 8
	};

	/**
	 * Enum ProtocolPlugins.mpe_personal_trade_state
	 */
	enum class Empe_personal_trade_state : uint8_t
	{
		mpe_personal_trade_state__none                         = 0,
		mpe_personal_trade_state__wait                         = 1,
		mpe_personal_trade_state__trade                        = 2,
		mpe_personal_trade_state__trade_lock                   = 3,
		mpe_personal_trade_state__confirm                      = 4,
		mpe_personal_trade_state__mpe_personal_trade_state_end = 5,
		mpe_personal_trade_state__mpe_personal_trade_MAX       = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_indun_enter_type
	 */
	enum class Empe_indun_enter_type : uint8_t
	{
		mpe_indun_enter_type__none                     = 0,
		mpe_indun_enter_type__direct                   = 1,
		mpe_indun_enter_type__auto_matching            = 2,
		mpe_indun_enter_type__siege_def_team           = 3,
		mpe_indun_enter_type__siege_atk_team           = 4,
		mpe_indun_enter_type__siege_observer           = 5,
		mpe_indun_enter_type__mpe_indun_enter_type_end = 6,
		mpe_indun_enter_type__mpe_indun_enter_MAX      = 7
	};

	/**
	 * Enum ProtocolPlugins.mpe_storage_goods_move
	 */
	enum class Empe_storage_goods_move : uint8_t
	{
		mpe_storage_goods_move__none                       = 0,
		mpe_storage_goods_move__toStorage                  = 1,
		mpe_storage_goods_move__toCharacter                = 2,
		mpe_storage_goods_move__mpe_storage_goods_move_end = 3,
		mpe_storage_goods_move__mpe_storage_goods_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_donation_type
	 */
	enum class Empe_guild_donation_type : uint8_t
	{
		mpe_guild_donation_type__gold                        = 0,
		mpe_guild_donation_type__blackiron                   = 1,
		mpe_guild_donation_type__goldingot                   = 2,
		mpe_guild_donation_type__mpe_guild_donation_type_end = 3,
		mpe_guild_donation_type__mpe_guild_donation_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_item_add_type
	 */
	enum class Empe_item_add_type : uint8_t
	{
		mpe_item_add_type__none                  = 0,
		mpe_item_add_type__buy                   = 1,
		mpe_item_add_type__drop                  = 2,
		mpe_item_add_type__option                = 3,
		mpe_item_add_type__mpe_item_add_type_end = 4,
		mpe_item_add_type__mpe_item_add_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_object_collect_flag
	 */
	enum class Empe_object_collect_flag : uint8_t
	{
		mpe_object_collect_flag__none                        = 0,
		mpe_object_collect_flag__start                       = 1,
		mpe_object_collect_flag__finish                      = 2,
		mpe_object_collect_flag__cancel                      = 3,
		mpe_object_collect_flag__mpe_object_collect_flag_end = 4,
		mpe_object_collect_flag__mpe_object_collect_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_item_enchant_option_make_flag
	 */
	enum class Empe_item_enchant_option_make_flag : uint8_t
	{
		mpe_item_enchant_option_make_flag__make_one                              = 0,
		mpe_item_enchant_option_make_flag__make_five                             = 1,
		mpe_item_enchant_option_make_flag__mpe_item_enchant_option_make_flag_end = 2,
		mpe_item_enchant_option_make_flag__mpe_item_enchant_option_make_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_item_flag
	 */
	enum class Empe_item_flag : uint8_t
	{
		mpe_item_flag__none              = 0,
		mpe_item_flag__stone             = 1,
		mpe_item_flag__item              = 2,
		mpe_item_flag__mpe_item_flag_end = 3,
		mpe_item_flag__mpe_item_MAX      = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_item_option_enchant
	 */
	enum class Empe_item_option_enchant : uint8_t
	{
		mpe_item_option_enchant__none                        = 0,
		mpe_item_option_enchant__max                         = 1,
		mpe_item_option_enchant__mpe_item_option_enchant_end = 2
	};

	/**
	 * Enum ProtocolPlugins.mpe_state
	 */
	enum class Empe_state : uint8_t
	{
		mpe_state__under_maintenance = 0,
		mpe_state__free              = 1,
		mpe_state__busy              = 2,
		mpe_state__full              = 3,
		mpe_state__mpe_state_end     = 4,
		mpe_state__mpe_MAX           = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_mail_state
	 */
	enum class Empe_mail_state : uint8_t
	{
		mpe_mail_state__mail_none          = 0,
		mpe_mail_state__mail_opened        = 1,
		mpe_mail_state__mail_received_item = 2,
		mpe_mail_state__mpe_mail_state_end = 3,
		mpe_mail_state__mpe_mail_MAX       = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_mail_type
	 */
	enum class Empe_mail_type : uint8_t
	{
		mpe_mail_type__mail_type_account   = 0,
		mpe_mail_type__mail_type_character = 1,
		mpe_mail_type__mail_type_server    = 2,
		mpe_mail_type__mpe_mail_type_end   = 3,
		mpe_mail_type__mpe_mail_MAX        = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_fsm_type
	 */
	enum class Empe_fsm_type : uint8_t
	{
		mpe_fsm_type__fsm_none         = 0,
		mpe_fsm_type__fsm_appeared     = 1,
		mpe_fsm_type__fsm_idle         = 2,
		mpe_fsm_type__fsm_move         = 3,
		mpe_fsm_type__fsm_battle       = 4,
		mpe_fsm_type__fsm_retraction   = 5,
		mpe_fsm_type__fsm_dead         = 6,
		mpe_fsm_type__fsm_return       = 7,
		mpe_fsm_type__fsm_dummy        = 8,
		mpe_fsm_type__fsm_delete       = 9,
		mpe_fsm_type__fsm_trace        = 10,
		mpe_fsm_type__fsm_follow       = 11,
		mpe_fsm_type__fsm_siege        = 12,
		mpe_fsm_type__fsm_reverse      = 13,
		mpe_fsm_type__fsm_change       = 14,
		mpe_fsm_type__fsm_one_move     = 15,
		mpe_fsm_type__fsm_phase_change = 16,
		mpe_fsm_type__fsm_max          = 17,
		mpe_fsm_type__mpe_fsm_type_end = 18,
		mpe_fsm_type__mpe_fsm_MAX      = 19
	};

	/**
	 * Enum ProtocolPlugins.mpe_echant_slot
	 */
	enum class Empe_echant_slot : uint8_t
	{
		mpe_echant_slot__echant_slot_none    = 0,
		mpe_echant_slot__echant_slot_slot    = 1,
		mpe_echant_slot__echant_slot_slot01  = 2,
		mpe_echant_slot__echant_slot_slot02  = 3,
		mpe_echant_slot__mpe_echant_slot_end = 4,
		mpe_echant_slot__mpe_echant_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_make_result
	 */
	enum class Empe_make_result : uint8_t
	{
		mpe_make_result__success             = 0,
		mpe_make_result__great               = 1,
		mpe_make_result__fail                = 2,
		mpe_make_result__mpe_make_result_end = 3,
		mpe_make_result__mpe_make_MAX        = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_profesion
	 */
	enum class Empe_profesion : uint8_t
	{
		mpe_profesion__profesion_alchemy    = 0,
		mpe_profesion__profesion_blacksmith = 1,
		mpe_profesion__profesion_cooking    = 2,
		mpe_profesion__profesion_gather     = 3,
		mpe_profesion__profesion_mining     = 4,
		mpe_profesion__profesion_logging    = 5,
		mpe_profesion__profesion_fishing    = 6,
		mpe_profesion__profesion_max        = 7,
		mpe_profesion__mpe_profesion_end    = 8,
		mpe_profesion__mpe_MAX              = 9
	};

	/**
	 * Enum ProtocolPlugins.mpe_guild_member_grade
	 */
	enum class Empe_guild_member_grade : uint8_t
	{
		mpe_guild_member_grade__none                       = 0,
		mpe_guild_member_grade__master                     = 1,
		mpe_guild_member_grade__sub_master                 = 2,
		mpe_guild_member_grade__elder                      = 3,
		mpe_guild_member_grade__common                     = 4,
		mpe_guild_member_grade__all                        = 5,
		mpe_guild_member_grade__mpe_guild_member_grade_end = 6,
		mpe_guild_member_grade__mpe_guild_member_MAX       = 7
	};

	/**
	 * Enum ProtocolPlugins.mpe_skill_action_result
	 */
	enum class Empe_skill_action_result : uint8_t
	{
		mpe_skill_action_result__skill_action_none           = 0,
		mpe_skill_action_result__skill_action_start          = 1,
		mpe_skill_action_result__skill_action_resist         = 2,
		mpe_skill_action_result__skill_action_immune         = 3,
		mpe_skill_action_result__mpe_skill_action_result_end = 4,
		mpe_skill_action_result__mpe_skill_action_MAX        = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_item_reinforce_position
	 */
	enum class Empe_item_reinforce_position : uint8_t
	{
		mpe_item_reinforce_position__equip                           = 0,
		mpe_item_reinforce_position__inventory                       = 1,
		mpe_item_reinforce_position__mpe_item_reinforce_position_end = 2,
		mpe_item_reinforce_position__mpe_item_reinforce_MAX          = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_result_fish
	 */
	enum class Empe_result_fish : uint8_t
	{
		mpe_result_fish__fish_ing            = 0,
		mpe_result_fish__fish_fail           = 1,
		mpe_result_fish__fish_success        = 2,
		mpe_result_fish__fish_big            = 3,
		mpe_result_fish__mpe_result_fish_end = 4,
		mpe_result_fish__mpe_result_MAX      = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_luck_reinforce_result
	 */
	enum class Empe_luck_reinforce_result : uint8_t
	{
		mpe_luck_reinforce_result__reinforce_none                = 0,
		mpe_luck_reinforce_result__reinforce_success             = 1,
		mpe_luck_reinforce_result__reinforce_fail                = 2,
		mpe_luck_reinforce_result__reinforce_fail_down           = 3,
		mpe_luck_reinforce_result__reinforce_big                 = 4,
		mpe_luck_reinforce_result__mpe_luck_reinforce_result_end = 5,
		mpe_luck_reinforce_result__mpe_luck_reinforce_MAX        = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_update_type
	 */
	enum class Empe_update_type : uint8_t
	{
		mpe_update_type__update_type_none                   = 0,
		mpe_update_type__update_type_protect_slot           = 1,
		mpe_update_type__update_type_inven_expansion        = 2,
		mpe_update_type__update_type_inven_weight_expansion = 3,
		mpe_update_type__update_type_character_revive       = 4,
		mpe_update_type__update_type_auto_battle_add_time   = 5,
		mpe_update_type__mpe_update_type_end                = 6,
		mpe_update_type__mpe_update_MAX                     = 7
	};

	/**
	 * Enum ProtocolPlugins.mpe_pk_color
	 */
	enum class Empe_pk_color : uint8_t
	{
		mpe_pk_color__pk_color_white   = 0,
		mpe_pk_color__pk_color_brown   = 1,
		mpe_pk_color__pk_color_yellow  = 2,
		mpe_pk_color__pk_color_red     = 3,
		mpe_pk_color__mpe_pk_color_end = 4,
		mpe_pk_color__mpe_pk_MAX       = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_drop_owner
	 */
	enum class Empe_drop_owner : uint8_t
	{
		mpe_drop_owner__drop_owner_none      = 0,
		mpe_drop_owner__drop_owner_character = 1,
		mpe_drop_owner__drop_owner_party     = 2,
		mpe_drop_owner__mpe_drop_owner_end   = 3,
		mpe_drop_owner__mpe_drop_MAX         = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_revive
	 */
	enum class Empe_revive : uint8_t
	{
		mpe_revive__revive_use_item = 0,
		mpe_revive__revive_vaillage = 1,
		mpe_revive__revive_auto     = 2,
		mpe_revive__revive_skill    = 3,
		mpe_revive__revive_redirect = 4,
		mpe_revive__mpe_revive_end  = 5,
		mpe_revive__mpe_MAX         = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_notice_type
	 */
	enum class Empe_notice_type : uint8_t
	{
		mpe_notice_type__none                = 0,
		mpe_notice_type__inspection_force    = 1,
		mpe_notice_type__inspection_normal   = 2,
		mpe_notice_type__inspection_60sec    = 3,
		mpe_notice_type__inspection_30sec    = 4,
		mpe_notice_type__inspection_10sec    = 5,
		mpe_notice_type__mpe_notice_type_end = 6,
		mpe_notice_type__mpe_notice_MAX      = 7
	};

	/**
	 * Enum ProtocolPlugins.mpe_chatting
	 */
	enum class Empe_chatting : uint8_t
	{
		mpe_chatting__chat_normal      = 0,
		mpe_chatting__chat_world       = 1,
		mpe_chatting__chat_party       = 2,
		mpe_chatting__chat_guild       = 3,
		mpe_chatting__chat_promotion   = 4,
		mpe_chatting__chat_exchange    = 5,
		mpe_chatting__chat_system      = 6,
		mpe_chatting__chat_private     = 7,
		mpe_chatting__mpe_chatting_end = 8,
		mpe_chatting__mpe_MAX          = 9
	};

	/**
	 * Enum ProtocolPlugins.mpe_use_type
	 */
	enum class Empe_use_type : uint8_t
	{
		mpe_use_type__use_none         = 0,
		mpe_use_type__use_grow         = 1,
		mpe_use_type__use_battle       = 2,
		mpe_use_type__use_hp_duration  = 3,
		mpe_use_type__use_hp_instant   = 4,
		mpe_use_type__use_mp_duration  = 5,
		mpe_use_type__use_mp_instant   = 6,
		mpe_use_type__mpe_use_type_end = 7,
		mpe_use_type__mpe_use_MAX      = 8
	};

	/**
	 * Enum ProtocolPlugins.mpe_slot_pos
	 */
	enum class Empe_slot_pos : uint8_t
	{
		mpe_slot_pos__slot_hp_one      = 0,
		mpe_slot_pos__slot_hp_two      = 1,
		mpe_slot_pos__slot_hp_three    = 2,
		mpe_slot_pos__slot_mp_one      = 3,
		mpe_slot_pos__slot_mp_two      = 4,
		mpe_slot_pos__slot_mp_three    = 5,
		mpe_slot_pos__slot_max         = 6,
		mpe_slot_pos__mpe_slot_pos_end = 7,
		mpe_slot_pos__mpe_slot_MAX     = 8
	};

	/**
	 * Enum ProtocolPlugins.mpe_party_vote
	 */
	enum class Empe_party_vote : uint8_t
	{
		mpe_party_vote__none                                = 0,
		mpe_party_vote__owner_ban                           = 1,
		mpe_party_vote__member_ban                          = 2,
		mpe_party_vote__loot_change                         = 3,
		mpe_party_vote__indun_select                        = 4,
		mpe_party_vote__indun_auto_matching                 = 5,
		mpe_party_vote__indun_enter_check_for_direct        = 6,
		mpe_party_vote__indun_enter_check_for_auto_matching = 7,
		mpe_party_vote__mpe_party_vote_end                  = 8,
		mpe_party_vote__mpe_party_MAX                       = 9
	};

	/**
	 * Enum ProtocolPlugins.mpe_party_teleport
	 */
	enum class Empe_party_teleport : uint8_t
	{
		mpe_party_teleport__owner_teleport         = 0,
		mpe_party_teleport__member_summon          = 1,
		mpe_party_teleport__mpe_party_teleport_end = 2,
		mpe_party_teleport__mpe_party_MAX          = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_party_join
	 */
	enum class Empe_party_join : uint8_t
	{
		mpe_party_join__automatic          = 0,
		mpe_party_join__manual             = 1,
		mpe_party_join__mpe_party_join_end = 2,
		mpe_party_join__mpe_party_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_party_loot
	 */
	enum class Empe_party_loot : uint8_t
	{
		mpe_party_loot__turn               = 0,
		mpe_party_loot__every              = 1,
		mpe_party_loot__mpe_party_loot_end = 2,
		mpe_party_loot__mpe_party_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_damage_type
	 */
	enum class Empe_damage_type : uint8_t
	{
		mpe_damage_type__damage_none         = 0,
		mpe_damage_type__damage_hit          = 1,
		mpe_damage_type__damage_miss         = 2,
		mpe_damage_type__damage_critical     = 3,
		mpe_damage_type__damage_hp           = 4,
		mpe_damage_type__damage_mp           = 5,
		mpe_damage_type__damage_auto_heal_hp = 6,
		mpe_damage_type__damage_auto_heal_mp = 7,
		mpe_damage_type__damage_perfect      = 8,
		mpe_damage_type__damage_great        = 9,
		mpe_damage_type__damage_good         = 10,
		mpe_damage_type__damage_vampiric_hp  = 11,
		mpe_damage_type__damage_vampiric_mp  = 12,
		mpe_damage_type__damage_reflection   = 13,
		mpe_damage_type__mpe_damage_type_end = 14,
		mpe_damage_type__mpe_damage_MAX      = 15
	};

	/**
	 * Enum ProtocolPlugins.mpe_direction
	 */
	enum class Empe_direction : uint8_t
	{
		mpe_direction__nn                = 0,
		mpe_direction__ne                = 1,
		mpe_direction__ee                = 2,
		mpe_direction__es                = 3,
		mpe_direction__ss                = 4,
		mpe_direction__sw                = 5,
		mpe_direction__ww                = 6,
		mpe_direction__wn                = 7,
		mpe_direction__max               = 8,
		mpe_direction__mpe_direction_end = 9
	};

	/**
	 * Enum ProtocolPlugins.mpe_move_type
	 */
	enum class Empe_move_type : uint8_t
	{
		mpe_move_type__mt_stop           = 0,
		mpe_move_type__mt_walk           = 1,
		mpe_move_type__mt_run            = 2,
		mpe_move_type__mt_return         = 3,
		mpe_move_type__mt_teleport       = 4,
		mpe_move_type__mpe_move_type_end = 5,
		mpe_move_type__mpe_move_MAX      = 6
	};

	/**
	 * Enum ProtocolPlugins.mpe_character_action
	 */
	enum class Empe_character_action : uint8_t
	{
		mpe_character_action__action_none                = 0,
		mpe_character_action__action_collect             = 1,
		mpe_character_action__action_skill_action        = 2,
		mpe_character_action__action_fish                = 3,
		mpe_character_action__action_dead                = 4,
		mpe_character_action__action_treasure_box_open   = 5,
		mpe_character_action__action_treasure_box_finish = 6,
		mpe_character_action__action_teleport_start      = 7,
		mpe_character_action__action_teleport_arrive     = 8,
		mpe_character_action__action_transform_avatar    = 9,
		mpe_character_action__action_seal_device_start   = 10,
		mpe_character_action__action_seal_device_finish  = 11,
		mpe_character_action__action_telport_reservation = 12,
		mpe_character_action__action_observer            = 13,
		mpe_character_action__action_street_stall        = 14,
		mpe_character_action__action_street_stall_wait   = 15,
		mpe_character_action__mpe_character_action_end   = 16,
		mpe_character_action__mpe_character_MAX          = 17
	};

	/**
	 * Enum ProtocolPlugins.mpe_quest_state
	 */
	enum class Empe_quest_state : uint8_t
	{
		mpe_quest_state__qs_none             = 0,
		mpe_quest_state__qs_accept           = 1,
		mpe_quest_state__qs_complete         = 2,
		mpe_quest_state__qs_finish           = 3,
		mpe_quest_state__mpe_quest_state_end = 4,
		mpe_quest_state__mpe_quest_MAX       = 5
	};

	/**
	 * Enum ProtocolPlugins.mpe_daily_content_pos
	 */
	enum class Empe_daily_content_pos : uint8_t
	{
		mpe_daily_content_pos__daily_chao_point          = 0,
		mpe_daily_content_pos__daily_free_revive_count   = 1,
		mpe_daily_content_pos__daily_max                 = 2,
		mpe_daily_content_pos__mpe_daily_content_pos_end = 3,
		mpe_daily_content_pos__mpe_daily_content_MAX     = 4
	};

	/**
	 * Enum ProtocolPlugins.mpe_equip_flag
	 */
	enum class Empe_equip_flag : uint8_t
	{
		mpe_equip_flag__equip              = 0,
		mpe_equip_flag__release            = 1,
		mpe_equip_flag__mpe_equip_flag_end = 2,
		mpe_equip_flag__mpe_equip_MAX      = 3
	};

	/**
	 * Enum ProtocolPlugins.mpe_equip_pos
	 */
	enum class Empe_equip_pos : uint8_t
	{
		mpe_equip_pos__weapon                = 0,
		mpe_equip_pos__sub_weapon            = 1,
		mpe_equip_pos__helmet                = 2,
		mpe_equip_pos__armor                 = 3,
		mpe_equip_pos__necklace              = 4,
		mpe_equip_pos__bracelet_r            = 5,
		mpe_equip_pos__bracelet_l            = 6,
		mpe_equip_pos__ring_r                = 7,
		mpe_equip_pos__ring_l                = 8,
		mpe_equip_pos__belt                  = 9,
		mpe_equip_pos__shoes                 = 10,
		mpe_equip_pos__wing                  = 11,
		mpe_equip_pos__pickaxe               = 12,
		mpe_equip_pos__axe                   = 13,
		mpe_equip_pos__rod                   = 14,
		mpe_equip_pos__equip_stone           = 15,
		mpe_equip_pos__equip_vehicle         = 16,
		mpe_equip_pos__costume_weapon        = 17,
		mpe_equip_pos__costume_armor         = 18,
		mpe_equip_pos__costume_helmet        = 19,
		mpe_equip_pos__costume_weapon_female = 20,
		mpe_equip_pos__costume_armor_female  = 21,
		mpe_equip_pos__costume_helmet_female = 22,
		mpe_equip_pos__mandala               = 23,
		mpe_equip_pos__max                   = 24,
		mpe_equip_pos__mpe_equip_pos_end     = 25
	};

	/**
	 * Enum ProtocolPlugins.mpe_good_pos
	 */
	enum class Empe_good_pos : uint8_t
	{
		mpe_good_pos__level            = 0,
		mpe_good_pos__exp              = 1,
		mpe_good_pos__gold             = 2,
		mpe_good_pos__cash             = 3,
		mpe_good_pos__chao_point       = 4,
		mpe_good_pos__goldingot        = 5,
		mpe_good_pos__concentration    = 6,
		mpe_good_pos__condition        = 7,
		mpe_good_pos__black_iron       = 8,
		mpe_good_pos__treasurebox_key  = 9,
		mpe_good_pos__guild_point      = 10,
		mpe_good_pos__guid_gold        = 11,
		mpe_good_pos__boss_point       = 12,
		mpe_good_pos__force_exp        = 13,
		mpe_good_pos__pk_point         = 14,
		mpe_good_pos__mentor_point     = 15,
		mpe_good_pos__seal_tower_coin  = 16,
		mpe_good_pos__demon_tower_coin = 17,
		mpe_good_pos__mileage          = 18,
		mpe_good_pos__temp_01          = 19,
		mpe_good_pos__temp_02          = 20,
		mpe_good_pos__temp_03          = 21,
		mpe_good_pos__temp_04          = 22,
		mpe_good_pos__temp_05          = 23,
		mpe_good_pos__temp_06          = 24,
		mpe_good_pos__max              = 25,
		mpe_good_pos__mpe_good_pos_end = 26
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ProtocolPlugins.mps_achieve_info
	 * Size -> 0x000C
	 */
	struct Fmps_achieve_info
	{
	public:
		int32_t                                                    gid;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_arena_character
	 * Size -> 0x0048
	 */
	struct Fmps_arena_character
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    kill_count;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    death_count;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Team;                                                    // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUS4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Damage;                                                  // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    suffer_damage;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              win_lose;                                                // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3K7[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    add_score;                                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_mvp;                                                  // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGBJ[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_skill
	 * Size -> 0x0010
	 */
	struct Fmps_skill
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_db_skill_type                                         Type;                                                    // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HD0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_obtain_avatar
	 * Size -> 0x0028
	 */
	struct Fmps_obtain_avatar
	{
	public:
		int32_t                                                    avatar_id;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    keep_value;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_avatar_pos                                            Pos;                                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5A2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_skill>                                  list_skill;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    add_count;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5TT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_avatar
	 * Size -> 0x0020
	 */
	struct Fmps_avatar
	{
	public:
		int32_t                                                    avatar_id;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    keep_value;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_avatar_pos                                            Pos;                                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRYT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_skill>                                  list_skill;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_id
	 * Size -> 0x0008
	 */
	struct Fmps_item_id
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_cart_item
	 * Size -> 0x0018
	 */
	struct Fmps_cart_item
	{
	public:
		int64_t                                                    uid;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    table_id;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    buy_time;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    expire_time;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIKM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_obtain_pet_info
	 * Size -> 0x0038
	 */
	struct Fmps_obtain_pet_info
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLQY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Pos;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    satiety;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    keep_value;                                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    end_time;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    add_pet_number;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HHR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_temp_pet
	 * Size -> 0x0018
	 */
	struct Fmps_temp_pet
	{
	public:
		int64_t                                                    temp_uid;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              count;                                                   // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XEZL[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    expire_time;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMDB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_obtain_reflection
	 * Size -> 0x0010
	 */
	struct Fmps_obtain_reflection
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    keep_value;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       equip_state;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              gender;                                                  // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KD5F[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    add_value;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_temp_reflection
	 * Size -> 0x0018
	 */
	struct Fmps_temp_reflection
	{
	public:
		int64_t                                                    temp_uid;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              count;                                                   // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5QJ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    expire_time;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EB80[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_cash_shop_buy_count
	 * Size -> 0x0010
	 */
	struct Fmps_cash_shop_buy_count
	{
	public:
		int32_t                                                    table_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              count;                                                   // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IGE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    last_buy_date;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    cart_count;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_cash_exchange_product
	 * Size -> 0x0018
	 */
	struct Fmps_cash_exchange_product
	{
	public:
		TArray<int32_t>                                            list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    reset_date;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    sell_category_id;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_cash_package_product
	 * Size -> 0x0014
	 */
	struct Fmps_cash_package_product
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    sub_index;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    expire_time;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    last_buy_time;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_cash_limited_product
	 * Size -> 0x0010
	 */
	struct Fmps_cash_limited_product
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit_date;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    buy_count;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    cart_count;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_specialties_work
	 * Size -> 0x0018
	 */
	struct Fmps_castle_town_specialties_work
	{
	public:
		Empe_castle_town_specialties_pos                           specialties_pos;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPPN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    gather_value;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    end_delivery_time;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gather_table_id;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4GP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_contents_onoff_data
	 * Size -> 0x0008
	 */
	struct Fmps_contents_onoff_data
	{
	public:
		int32_t                                                    Param;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Active;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKHD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_contents_onoff_info
	 * Size -> 0x0018
	 */
	struct Fmps_contents_onoff_info
	{
	public:
		Empe_contents_onoff_type                                   contents_type;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PC1G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_contents_onoff_data>                    contents_onoff_list;                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_achieve_rate_info
	 * Size -> 0x0020
	 */
	struct Fmps_achieve_rate_info
	{
	public:
		int32_t                                                    collection_id;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ6Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            type_rate;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    total_rate;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_count_update
	 * Size -> 0x0010
	 */
	struct Fmps_item_count_update
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Update;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    total;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_dictionary_info
	 * Size -> 0x0020
	 */
	struct Fmps_dictionary_info
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_dictionary_type                                       Type;                                                    // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZBY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    end_date;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       State;                                                   // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AWY[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_dictionary_count_info
	 * Size -> 0x000C
	 */
	struct Fmps_dictionary_count_info
	{
	public:
		Empe_dictionary_type                                       Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DK34[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    total;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    complet;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_dictionary_per_info
	 * Size -> 0x0008
	 */
	struct Fmps_dictionary_per_info
	{
	public:
		int32_t                                                    category_id;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_ability_value
	 * Size -> 0x0010
	 */
	struct Fmps_ability_value
	{
	public:
		int32_t                                                    ability_list_id;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ability_type;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PA33[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    result_value;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_buff
	 * Size -> 0x0030
	 */
	struct Fmps_buff
	{
	public:
		int64_t                                                    buff_uid;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    skill_ability_id;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    stack_count;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_ability_value>                          buff_value;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    remain_time;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGYY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    end_time;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_siege_warfare_time_info
	 * Size -> 0x0010
	 */
	struct Fmps_siege_warfare_time_info
	{
	public:
		Empe_siege_castle_type                                     castle_type;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VK2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    siege_time;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_simple_pk_revenge_info
	 * Size -> 0x0010
	 */
	struct Fmps_simple_pk_revenge_info
	{
	public:
		int64_t                                                    record_id;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_pickup_info
	 * Size -> 0x0018
	 */
	struct Fmps_pickup_info
	{
	public:
		unsigned char                                              item_type;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_II6Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    iuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    table_id;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_pet_info
	 * Size -> 0x0030
	 */
	struct Fmps_pet_info
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HL1Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Pos;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    satiety;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    keep_value;                                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    end_time;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_vehicle
	 * Size -> 0x0028
	 */
	struct Fmps_vehicle
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    satiety;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    end_date;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int64_t>                                            equip_uid;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_quest
	 * Size -> 0x0014
	 */
	struct Fmps_quest
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_quest_state                                           State;                                                   // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PO6M[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    object_count;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    area_id;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Sequence;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2LUJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_show_aggro_info
	 * Size -> 0x0010
	 */
	struct Fmps_show_aggro_info
	{
	public:
		int64_t                                                    uid;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      aggro;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U77O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_siege_machine
	 * Size -> 0x0018
	 */
	struct Fmps_siege_machine
	{
	public:
		int32_t                                                    table_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_siege_warfare_machine_position                        machine_position;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5QY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    item_id;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    set_cuid;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_member
	 * Size -> 0x0050
	 */
	struct Fmps_guild_member
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    class_id;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_guild_member_grade                                    grade;                                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       online;                                                  // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_679W[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    last_online_time;                                        // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    join_time;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    contribution_weekly_point;                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    contribution_accumulated_point;                          // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    last_donation_count_reset_time;                          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              donation_count;                                          // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              blackiron_donation_count;                                // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              goldingot_donation_count;                                // 0x0046(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              item_donation_count;                                     // 0x0047(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              get_item_request_count_storage_share;                    // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              get_item_count_storage_supply;                           // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_quest_state                                           master_order_quest_state;                                // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RR0[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    master_order_quest_object_count;                         // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_goods
	 * Size -> 0x000C
	 */
	struct Fmps_guild_goods
	{
	public:
		Empe_guild_goods                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1RT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Update;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    total;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_iuid
	 * Size -> 0x0010
	 */
	struct Fmps_item_iuid
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0F8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_castle_info
	 * Size -> 0x0010
	 */
	struct Fmps_guild_castle_info
	{
	public:
		Empe_siege_castle_type                                     castle_type;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3F9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Guid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild
	 * Size -> 0x0160
	 */
	struct Fmps_guild
	{
	public:
		int64_t                                                    Guid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_guild_join_type                                       join_type;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GD1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    join_level;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    master_cuid;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gold;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTY4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              introduction;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              notice;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    current_member_count;                                    // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_member_count;                                        // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    current_elder_count;                                     // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_elder_count;                                         // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    create_time;                                             // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    member_contribution_weekly_point_reset_time;             // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              master_nickname;                                         // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    storage_share_slot_count;                                // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7Q8[0x1C];                                  // 0x008C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_guild_castle_info>                      castle_info;                                             // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIIC[0x68];                                  // 0x00B8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    pr_count;                                                // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2N36[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    pr_count_reset_time;                                     // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_guild_type                                            guild_type;                                              // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBJS[0xF];                                   // 0x0131(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    blackiron;                                               // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    goldingot;                                               // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    notice_update_time;                                      // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_request_member
	 * Size -> 0x0028
	 */
	struct Fmps_guild_request_member
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    class_id;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    request_expire_time;                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item
	 * Size -> 0x0060
	 */
	struct Fmps_item
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       locked;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       have_option;                                             // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B03G[0x3E];                                  // 0x0012(0x003E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    durability;                                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_durability;                                          // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    expire_time;                                             // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RYW[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_storage_share_item
	 * Size -> 0x0070
	 */
	struct Fmps_guild_storage_share_item
	{
	public:
		unsigned char                                              UnknownData_4TWF[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Request;                                                 // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87MH[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_storage_share_request_get_item
	 * Size -> 0x0088
	 */
	struct Fmps_guild_storage_share_request_get_item
	{
	public:
		int64_t                                                    request_uid;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    request_cuid;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7P0H[0x68];                                  // 0x0010(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    request_count;                                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0T5[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    expire_time;                                             // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_storage_treasure_item
	 * Size -> 0x00C8
	 */
	struct Fmps_guild_storage_treasure_item
	{
	public:
		unsigned char                                              UnknownData_06M5[0xC8];                                  // 0x0000(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_storage_treasure_my_request
	 * Size -> 0x00D0
	 */
	struct Fmps_guild_storage_treasure_my_request
	{
	public:
		unsigned char                                              UnknownData_DAYN[0xC8];                                  // 0x0000(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    my_request_price;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4FQ[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_treasurebox_reward_item
	 * Size -> 0x0008
	 */
	struct Fmps_guild_treasurebox_reward_item
	{
	public:
		int32_t                                                    item_id;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_war
	 * Size -> 0x0068
	 */
	struct Fmps_guild_war
	{
	public:
		int64_t                                                    enemy_guid;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              enemy_guild_name;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              enemy_guild_master_name;                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_guild_war_state                                       State;                                                   // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5F3J[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    our_reject_count;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    enemy_reject_count;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CXE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    last_negotiation_guid;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    last_negotiation_gold;                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59ZI[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    negotiation_expire_time;                                 // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    next_available_start_time;                               // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      enemy_guild_mark;                                        // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_party_member_base
	 * Size -> 0x0068
	 */
	struct Fmps_party_member_base
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    puid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Slot;                                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ6J[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nickname;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       online;                                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZR8[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    zone_id;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Guid;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    channel_id;                                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M09B[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_indun_play_count_request
	 * Size -> 0x0008
	 */
	struct Fmps_indun_play_count_request
	{
	public:
		int32_t                                                    gid;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_lord_bless_buff
	 * Size -> 0x0010
	 */
	struct Fmps_lord_bless_buff
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    end_time;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    use_count;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_siege_castle_type                                     castle_type;                                             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RL66[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_mail_item
	 * Size -> 0x0010
	 */
	struct Fmps_mail_item
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_mandala_node_info
	 * Size -> 0x0030
	 */
	struct Fmps_mandala_node_info
	{
	public:
		int32_t                                                    node_id;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       State;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNVC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    equip_uid;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pos;                                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    plate_id;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9D44[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_mandala_layer_info
	 * Size -> 0x000C
	 */
	struct Fmps_mandala_layer_info
	{
	public:
		int32_t                                                    layer_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    plate_id;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pos;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_mandala_layer_rotate
	 * Size -> 0x0008
	 */
	struct Fmps_mandala_layer_rotate
	{
	public:
		int32_t                                                    layer_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    rotate_count;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_map_discovery
	 * Size -> 0x0018
	 */
	struct Fmps_map_discovery
	{
	public:
		int32_t                                                    map_id;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7G8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int64_t>                                            list_area;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_reward_info
	 * Size -> 0x0008
	 */
	struct Fmps_reward_info
	{
	public:
		int32_t                                                    npc_id;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reward;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_party_member
	 * Size -> 0x0098
	 */
	struct Fmps_party_member
	{
	public:
		int32_t                                                    power;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    hp_max;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MP_MAX;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    hp;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mp;                                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6HX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_buff>                                   buff_info;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EP8U[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_party_info
	 * Size -> 0x0060
	 */
	struct Fmps_party_info
	{
	public:
		int64_t                                                    puid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    owner_uid;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3XU[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_party_member>                           list;                                                    // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_trade_info
	 * Size -> 0x0058
	 */
	struct Fmps_trade_info
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPV0[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_reward_pet_info
	 * Size -> 0x0038
	 */
	struct Fmps_reward_pet_info
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROTH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Pos;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    satiety;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    keep_value;                                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    end_time;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isNew;                                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       upgrade;                                                 // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWVE[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    add_count;                                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_pk_record
	 * Size -> 0x0050
	 */
	struct Fmps_pk_record
	{
	public:
		int64_t                                                    record_id;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       result;                                                  // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       reg_revenge;                                             // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TCN[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    reg_time;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_item_id>                                lose_item;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    lose_gold;                                               // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TID;                                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    chao_point;                                              // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       wanted_murder_result;                                    // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQ9U[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_pk_revenge
	 * Size -> 0x0048
	 */
	struct Fmps_pk_revenge
	{
	public:
		int64_t                                                    record_id;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       result;                                                  // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWX7[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    reg_time;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TID;                                                     // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    chao_point;                                              // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    revenge_possible_time;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    delete_time;                                             // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_reward_value
	 * Size -> 0x0008
	 */
	struct Fmps_reward_value
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_revive
	 * Size -> 0x0018
	 */
	struct Fmps_revive
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOPS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Exp;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    expire_time;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32NP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_reflection_change_skill
	 * Size -> 0x0008
	 */
	struct Fmps_reflection_change_skill
	{
	public:
		int32_t                                                    skill_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    remain_cool_time;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_reflection
	 * Size -> 0x0010
	 */
	struct Fmps_reflection
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              gender;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VYS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    keep_value;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       equip_state;                                             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHIQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_room_member
	 * Size -> 0x0030
	 */
	struct Fmps_room_member
	{
	public:
		int64_t                                                    ruid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    table_id;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPLU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nickname;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VR9X[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_schedule_info
	 * Size -> 0x0018
	 */
	struct Fmps_schedule_info
	{
	public:
		unsigned char                                              State;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              siege_type;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDWI[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    start_time;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    end_time;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_seasonpass_challenge
	 * Size -> 0x0018
	 */
	struct Fmps_seasonpass_challenge
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    season_number;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    main_type;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    sub_type;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_challenge_state                                       State;                                                   // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q56Z[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_seasonpass
	 * Size -> 0x0040
	 */
	struct Fmps_seasonpass
	{
	public:
		int32_t                                                    season_number;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    season_lv;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    season_exp;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    unlock_lv;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    unlock_time;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    free_reward;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    pass_reward;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    day_reward;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       complete_reward;                                         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1PQ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    end_date;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    buy_date;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z84[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_reward_value>                           list_end_reward;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_member_look_info
	 * Size -> 0x0028
	 */
	struct Fmps_guild_member_look_info
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    customizing_data;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHLR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            equip_data;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    reflection_id;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OK9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_damage_result
	 * Size -> 0x0020
	 */
	struct Fmps_damage_result
	{
	public:
		int32_t                                                    Damage;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    result_value;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_damage_type                                           damage_type;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28WH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Log;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_damage_list
	 * Size -> 0x0040
	 */
	struct Fmps_damage_list
	{
	public:
		int64_t                                                    target_uid;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_damage_result>                          damage_list;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_buff>                                   buff_info;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    tile_index;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNPN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    contribution_uid;                                        // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_skill_action_result                                   skill_action_result;                                     // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7IO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_enemy_error
	 * Size -> 0x0010
	 */
	struct Fmps_enemy_error
	{
	public:
		int64_t                                                    uid;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXW5[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Empe_fsm_type                                              fsm;                                                     // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JUI[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_combo_ability
	 * Size -> 0x0008
	 */
	struct Fmps_combo_ability
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_storage_move_goods
	 * Size -> 0x0014
	 */
	struct Fmps_storage_move_goods
	{
	public:
		int32_t                                                    storage_pos;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RTR[0x10];                                  // 0x0004(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_product_info
	 * Size -> 0x000C
	 */
	struct Fmps_street_stall_product_info
	{
	public:
		int32_t                                                    product_id;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_good_pos                                              good_pos;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87S3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    good_value;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_owner_stat
	 * Size -> 0x0008
	 */
	struct Fmps_street_stall_owner_stat
	{
	public:
		int32_t                                                    ability_calculation_list;                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_fees
	 * Size -> 0x0008
	 */
	struct Fmps_street_stall_fees
	{
	public:
		Empe_good_pos                                              Pos;                                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZSQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_log
	 * Size -> 0x0030
	 */
	struct Fmps_street_stall_log
	{
	public:
		int32_t                                                    product_id;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3WU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              customer_nickname;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            result;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    fees;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7E39[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_subscription_info
	 * Size -> 0x0008
	 */
	struct Fmps_subscription_info
	{
	public:
		unsigned char                                              subscription_id;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              subscription_type;                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TP7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    subscription_time;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_boss_contribution
	 * Size -> 0x0010
	 */
	struct Fmps_boss_contribution
	{
	public:
		int64_t                                                    uid;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      contribution;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6O1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_object_info
	 * Size -> 0x0320
	 */
	struct Fmps_zone_object_info
	{
	public:
		int64_t                                                    UUID;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T2E[0x190];                                 // 0x0010(0x0190) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Angle;                                                   // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6X9B[0x50];                                  // 0x01A4(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              team_index;                                              // 0x01F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBJR[0x12B];                                 // 0x01F5(0x012B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_pickup_info
	 * Size -> 0x000C
	 */
	struct Fmps_item_pickup_info
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_571Q[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_pickup
	 * Size -> 0x0018
	 */
	struct Fmps_item_pickup
	{
	public:
		int64_t                                                    uid;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_item_pickup_info>                       Info;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_field_boss
	 * Size -> 0x000C
	 */
	struct Fmps_field_boss
	{
	public:
		int32_t                                                    monster_id;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    zone_id;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    channel_id;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_sector_info
	 * Size -> 0x0008
	 */
	struct Fmps_sector_info
	{
	public:
		int32_t                                                    sector_id;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_arena_battle_ranking_info
	 * Size -> 0x0048
	 */
	struct Fmps_arena_battle_ranking_info
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guildname;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      guild_mark;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    rank;                                                    // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    score;                                                   // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_arena_character_season_info
	 * Size -> 0x0018
	 */
	struct Fmps_arena_character_season_info
	{
	public:
		int64_t                                                    battle_uid;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    season_round;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    add_score;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              win_lose;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKPC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_tax_member
	 * Size -> 0x0028
	 */
	struct Fmps_castle_tax_member
	{
	public:
		Empe_guild_member_grade                                    grade;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB93[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    contribution;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    contribution_weekly_point;                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    contribution_accumulated_point;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_info_with_guild
	 * Size -> 0x0038
	 */
	struct Fmps_castle_town_info_with_guild
	{
	public:
		int32_t                                                    town_id;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              town_grade;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KL5P[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    table_id;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMNN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              guild_name;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              master_name;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_enter;                                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E97H[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_log
	 * Size -> 0x0008
	 */
	struct Fmps_castle_town_log
	{
	public:
		unsigned char                                              log_num;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              log_param_1;                                             // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              log_param_2;                                             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4O5[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    reg_time;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_managing_info
	 * Size -> 0x0020
	 */
	struct Fmps_castle_town_managing_info
	{
	public:
		Empe_castle_town_detail_pos                                house_pos;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Build;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_38CA[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_castle_town_work_type                                 work_type;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYEH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    end_date_time;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_end;                                                  // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFYK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_view_owner_info
	 * Size -> 0x0068
	 */
	struct Fmps_castle_view_owner_info
	{
	public:
		Empe_siege_castle_type                                     castle_type;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D787[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Guid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cuid;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tax_rate;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tax_value;                                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    def_count;                                               // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66KO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    master_class;                                            // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    guild_level;                                             // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    member_count;                                            // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    entrance_fee;                                            // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_channel_status_info
	 * Size -> 0x000C
	 */
	struct Fmps_channel_status_info
	{
	public:
		int32_t                                                    map_id;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    channel_id;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_state                                                 State;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQX9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_event_info
	 * Size -> 0x000C
	 */
	struct Fmps_event_info
	{
	public:
		int32_t                                                    event_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reward_sequence;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    last_reward_date;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_item_info
	 * Size -> 0x0020
	 */
	struct Fmps_exchange_item_info
	{
	public:
		int64_t                                                    euid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    auid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    price;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reinforce;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    expire;                                                  // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_search_info
	 * Size -> 0x000C
	 */
	struct Fmps_exchange_search_info
	{
	public:
		int32_t                                                    exchange_type;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    class_type;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    item_id;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_search_item
	 * Size -> 0x000C
	 */
	struct Fmps_exchange_search_item
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    price;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_friend_info
	 * Size -> 0x0068
	 */
	struct Fmps_friend_info
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guildname;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    lasttime;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       connect;                                                 // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_friend_type                                           friend_type;                                             // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GS1K[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    map_id;                                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    channel_id;                                              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7DU[0x14];                                  // 0x0044(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_character_simple_info
	 * Size -> 0x0048
	 */
	struct Fmps_character_simple_info
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guildname;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_friendreq_enable;                                     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ36[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_goods_info
	 * Size -> 0x0008
	 */
	struct Fmps_guild_goods_info
	{
	public:
		Empe_guild_goods                                           Pos;                                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NPE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_league_rank
	 * Size -> 0x0050
	 */
	struct Fmps_guild_league_rank
	{
	public:
		int64_t                                                    Guid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    league;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    score;                                                   // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    rank;                                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q05[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              master_name;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    master_level;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    master_class;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      guild_mark;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_share_storage_log
	 * Size -> 0x0028
	 */
	struct Fmps_guild_share_storage_log
	{
	public:
		Empe_guild_share_storage_log                               log_type;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SWO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    item_tid;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    item_count;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reg_time;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGG0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_storage_history
	 * Size -> 0x0050
	 */
	struct Fmps_guild_storage_history
	{
	public:
		int64_t                                                    huid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Guid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    stringID;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    history_type;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              param_str;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              goods_str;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              item_str;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    regDateTime;                                             // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJ90[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_subscription_info_with_cuid
	 * Size -> 0x0018
	 */
	struct Fmps_subscription_info_with_cuid
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_subscription_info>                      subscription_info_list;                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_login_lobby_info
	 * Size -> 0x0010
	 */
	struct Fmps_login_lobby_info
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_login_server_group_info
	 * Size -> 0x0028
	 */
	struct Fmps_login_server_group_info
	{
	public:
		int32_t                                                    gid;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66YX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_state                                                 State;                                                   // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              recommend;                                               // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              new_server;                                              // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              create_limit;                                            // 0x001B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              show_list;                                               // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              connect_limit;                                           // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6EN[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    server_state;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANPD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_mail
	 * Size -> 0x0050
	 */
	struct Fmps_mail
	{
	public:
		int64_t                                                    muid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_mail_state                                            State;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ITA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ID;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    expir_date;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    reg_date;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              title_text;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              contents_text;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_mail_item>                              Info;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_mentor
	 * Size -> 0x0058
	 */
	struct Fmps_mentor
	{
	public:
		int64_t                                                    auid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    power;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PMH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    reg_date;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guildname;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      guild_mark;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_ranking_info
	 * Size -> 0x0060
	 */
	struct Fmps_ranking_info
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guildname;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZ0O[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_ranking_info_new
	 * Size -> 0x0060
	 */
	struct Fmps_ranking_info_new
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guildname;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O573[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_room
	 * Size -> 0x0050
	 */
	struct Fmps_room
	{
	public:
		int64_t                                                    ruid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    owner_uid;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    dungeon_id;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_party_loot                                            loot_type;                                               // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_party_join                                            join_type;                                               // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZ8L[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              owner_nickname;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    owner_class;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    member_count;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              auto_start;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IRL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              owner_guildname;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    owner_level;                                             // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OX9H[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_around_user_info
	 * Size -> 0x0050
	 */
	struct Fmps_around_user_info
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPFI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    power;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Guid;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      guild_mark;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_secretvalley_owner_info
	 * Size -> 0x0058
	 */
	struct Fmps_secretvalley_owner_info
	{
	public:
		unsigned char                                              secretvalley_type;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L87C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    guild_master_tid;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYHA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              guild_master_name;                                       // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    guild_uid;                                               // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    occupation_count;                                        // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    blackiron_daily_count;                                   // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    blackiron_sell_count;                                    // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    blackiron_sell_regist_next_time;                         // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_siege_warfare_alliance_info
	 * Size -> 0x0058
	 */
	struct Fmps_siege_warfare_alliance_info
	{
	public:
		int64_t                                                    Guid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLTX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    master_cuid;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              master_name;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    member_cnt;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_enemy;                                                // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V72D[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    master_class;                                            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USU9[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_siege_warfare_request_alliance_info
	 * Size -> 0x0058
	 */
	struct Fmps_siege_warfare_request_alliance_info
	{
	public:
		int64_t                                                    Guid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYS9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    master_cuid;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              master_name;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    member_cnt;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_enemy;                                                // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       accept;                                                  // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEQA[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    master_class;                                            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B19C[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_wanted_murder_info
	 * Size -> 0x0040
	 */
	struct Fmps_wanted_murder_info
	{
	public:
		int64_t                                                    target_cuid;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reward_value;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQTW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            list_shop_id;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    expire_date;                                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55PE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_wanted_murder_register_info
	 * Size -> 0x0040
	 */
	struct Fmps_wanted_murder_register_info
	{
	public:
		int64_t                                                    record_id;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    target_cuid;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    register_cuid;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reward_value;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    shop_id;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    expire_date;                                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LSW[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_wanted_murder_reward_info
	 * Size -> 0x0058
	 */
	struct Fmps_wanted_murder_reward_info
	{
	public:
		int64_t                                                    ruid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    reward_cuid;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    target_cuid;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    expire_date;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reward_value;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VY7[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            list_shop_id;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       reward_complete;                                         // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7G6[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_ability_calc_option
	 * Size -> 0x0008
	 */
	struct Fmps_ability_calc_option
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_account_storage
	 * Size -> 0x0008
	 */
	struct Fmps_account_storage
	{
	public:
		int32_t                                                    Size;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gold;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_ai_setup_config
	 * Size -> 0x0028
	 */
	struct Fmps_ai_setup_config
	{
	public:
		TArray<int32_t>                                            list_ai_config;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    hp_potion_quantity;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mp_potion_quantity;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    pickup_item_grade;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    town_return_count;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      potion_use_hp_ratio;                                     // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      potion_use_mp_ratio;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_avatar_info
	 * Size -> 0x0024
	 */
	struct Fmps_avatar_info
	{
	public:
		int32_t                                                    avatar_id;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              class_type;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HFN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    hp;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mp;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mmp;                                                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      atk_speed;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      run_speed;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    expire_time;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_cash_info
	 * Size -> 0x0010
	 */
	struct Fmps_cash_info
	{
	public:
		int32_t                                                    cash;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    month_charge;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    last_charge;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mileage;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_dungeon_info
	 * Size -> 0x0010
	 */
	struct Fmps_castle_dungeon_info
	{
	public:
		Empe_siege_castle_type                                     castle_type;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9G31[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    entrance_fee;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    apply_entrance_fee;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    entrance_fee_tax;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_info
	 * Size -> 0x00D0
	 */
	struct Fmps_castle_info
	{
	public:
		Empe_siege_castle_type                                     castle_type;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_490L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    owner_guid;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    owner_master_cuid;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tax_rate;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98V4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    siege_date_time;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       refund_payment;                                          // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QPI[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    tax_rate_reg_time;                                       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_castle_tax_distribution                               tax_distribution;                                        // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHZV[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    dungeon_entrance_fee;                                    // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    dungeon_apply_entrance_fee;                              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    dungeon_entrance_fee_tax;                                // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              master_name;                                             // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      guild_mark;                                              // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    def_count;                                               // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MKU0[0x20];                                  // 0x007C(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    master_class;                                            // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APTV[0x30];                                  // 0x00A0(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_info
	 * Size -> 0x0080
	 */
	struct Fmps_castle_town_info
	{
	public:
		int32_t                                                    town_id;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              town_grade;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TIU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    owner_guid;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    rental_end_time;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    continuation_delay_time;                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJYZ[0x68];                                  // 0x0018(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_all_info
	 * Size -> 0x0010
	 */
	struct Fmps_castle_town_all_info
	{
	public:
		TArray<struct Fmps_castle_town_info>                       Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_arsenal_work
	 * Size -> 0x0010
	 */
	struct Fmps_castle_town_arsenal_work
	{
	public:
		int32_t                                                    build_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    need_build_value;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    build_value;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    build_user_count;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_building_info
	 * Size -> 0x0008
	 */
	struct Fmps_castle_town_building_info
	{
	public:
		bool                                                       Build;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1BD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_character_specialties_work
	 * Size -> 0x0010
	 */
	struct Fmps_castle_town_character_specialties_work
	{
	public:
		Empe_castle_town_specialties_pos                           specialties_pos;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6RC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    end_time;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_dinner_work
	 * Size -> 0x0018
	 */
	struct Fmps_castle_town_dinner_work
	{
	public:
		int32_t                                                    dinner_table_id;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJ85[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    dinner_end_time;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    dinner_user_count;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3L4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_guild_tender
	 * Size -> 0x0030
	 */
	struct Fmps_castle_town_guild_tender
	{
	public:
		int64_t                                                    Guid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tender_value;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCN4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              master_name;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_info_detail
	 * Size -> 0x0060
	 */
	struct Fmps_castle_town_info_detail
	{
	public:
		bool                                                       Home;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9N75[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    home_lv;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       dungeon;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4IW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    dungeon_lv;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       storage;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2N5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    storage_lv;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       training_center;                                         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZHS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    training_center_lv;                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       quest_office;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TW0C[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    quest_office_lv;                                         // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       blacksmith;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2BM[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    blacksmith_lv;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       alchemy;                                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NME[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    alchemy_lv;                                              // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       cooking;                                                 // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY84[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    cooking_lv;                                              // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       arsenal;                                                 // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I63F[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    arsenal_lv;                                              // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       orchard;                                                 // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXAE[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    orchard_lv;                                              // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       grove;                                                   // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKJA[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    grove_lv;                                                // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       farm;                                                    // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6J8[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    farm_lv;                                                 // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_tender_info
	 * Size -> 0x0020
	 */
	struct Fmps_castle_town_tender_info
	{
	public:
		int32_t                                                    town_id;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    table_id;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    first_tender_value;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5WG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    end_time;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    enter_count;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCY2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_castle_town_work
	 * Size -> 0x0038
	 */
	struct Fmps_castle_town_work
	{
	public:
		int32_t                                                    work_id;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5D05[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Guid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    town_id;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_castle_town_work_type                                 work_type;                                               // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_castle_town_detail_pos                                house_pos;                                               // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21VH[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    house_growth_table_id;                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MGR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    start_date_time;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    end_date_time;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_end;                                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T257[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_profesion
	 * Size -> 0x0010
	 */
	struct Fmps_profesion
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    grade;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_dungeon
	 * Size -> 0x0018
	 */
	struct Fmps_dungeon
	{
	public:
		int32_t                                                    gid;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              dungeon_type;                                            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3Z7[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    lasttime;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              use_item_idx;                                            // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QENT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_db_buff
	 * Size -> 0x0018
	 */
	struct Fmps_db_buff
	{
	public:
		int64_t                                                    uid;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Time;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GLN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_ranking_history
	 * Size -> 0x0018
	 */
	struct Fmps_ranking_history
	{
	public:
		Empe_ranking_type                                          rank_type;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V39R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    rank;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    score;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    before_rank;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_825R[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_teleport_area
	 * Size -> 0x0008
	 */
	struct Fmps_teleport_area
	{
	public:
		int32_t                                                    map_id;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tile_index;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_dic_stat
	 * Size -> 0x0018
	 */
	struct Fmps_dic_stat
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JHB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_ability_calc_option>                    list_stat;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_illusion_dungeon
	 * Size -> 0x0018
	 */
	struct Fmps_illusion_dungeon
	{
	public:
		int32_t                                                    gid;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZDT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    reset_date;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    remaining_play_time;                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    charge_play_time;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_title_info
	 * Size -> 0x0008
	 */
	struct Fmps_title_info
	{
	public:
		int32_t                                                    title_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    end_time;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_character
	 * Size -> 0x0420
	 */
	struct Fmps_character
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFNA[0x134];                                 // 0x001C(0x0134) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            list_goods;                                              // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    Exp;                                                     // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_item>                                   list_equip;                                              // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    puid;                                                    // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    pk_setup;                                                // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    indun_id;                                                // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    protect_equip;                                           // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    power;                                                   // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            list_repute_quest;                                       // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       new_mail;                                                // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VOL[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            list_daily_content;                                      // 0x01A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_profesion>                              list_profesion;                                          // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y032[0x18];                                  // 0x01C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Guid;                                                    // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    guild_next_available_join_time;                          // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    account_storage_buy_date;                                // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    private_storage_size;                                    // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_dungeon>                                list_dungeon;                                            // 0x0208(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_db_buff>                                list_buff;                                               // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            list_guild_skill;                                        // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_vehicle>                                list_vehicle;                                            // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_item>                                   list_equip_vehicle;                                      // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    cur_vehicle;                                             // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO25[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_pet_info>                               list_pet_info;                                           // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    mentor_cuid;                                             // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_mentor_type                                           mentor_type;                                             // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0IF[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    mentor_next_available_join_time;                         // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            customizing_data;                                        // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_ranking_history>                        list_ranking;                                            // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Title;                                                   // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              show_costume;                                            // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42M0[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_teleport_area>                          list_saved_teleport;                                     // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHIL[0x18];                                  // 0x02C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_cash_limited_product>                   cash_limited_products;                                   // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    auto_battle_free_time;                                   // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    auto_battle_pay_time;                                    // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    auto_battle_login_time;                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    auto_battle_logout_time;                                 // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_dic_stat>                               dictionary_stat;                                         // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       is_transform_avatar;                                     // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EIJ[0x27];                                  // 0x0319(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       first_login;                                             // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URQ7[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    treasureboxkey_reset_count;                              // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    treasureboxkey_reset_time;                               // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_pet_team                                              pet_team;                                                // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPUC[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_seasonpass>                             list_seasonpass;                                         // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_seasonpass_challenge>                   list_challenge;                                          // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_avatar>                                 list_avatar;                                             // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_illusion_dungeon>                       list_illusion;                                           // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_reflection>                             list_reflection;                                         // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      list_skill_force;                                        // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            list_special_move_slot;                                  // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_mandala_layer_info>                     list_layer;                                              // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_mandala_node_info>                      list_node;                                               // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_mandala_layer_info>                     list_master_layer;                                       // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_mandala_node_info>                      list_master_node;                                        // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_title_info>                             list_title;                                              // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       send_nickname_disable;                                   // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5H6S[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_character_ability
	 * Size -> 0x0018
	 */
	struct Fmps_character_ability
	{
	public:
		unsigned char                                              UnknownData_CC3S[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_character_ability_stat
	 * Size -> 0x0008
	 */
	struct Fmps_character_ability_stat
	{
	public:
		int32_t                                                    lv;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_character_dictionary_stat
	 * Size -> 0x0030
	 */
	struct Fmps_character_dictionary_stat
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    pdef;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mdef;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    accuracy;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    atk;                                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    def_penetrate_rate;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    def_penetrate_value;                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    cc_resist;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    cc_rate;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    hp_max;                                                  // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MP_MAX;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    force_max;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_title
	 * Size -> 0x0018
	 */
	struct Fmps_title
	{
	public:
		int32_t                                                    gid;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       possession;                                              // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4OX[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    end_date;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_character_info_view
	 * Size -> 0x0120
	 */
	struct Fmps_character_info_view
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUHE[0xC];                                   // 0x001C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    repute_point;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_item>                                   list_equip;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    puid;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    power;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Vehicle;                                                 // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Guid;                                                    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    customzing_data;                                         // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0HR[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_ranking_history>                        list_ranking;                                            // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              show_costume;                                            // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFV5[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Title;                                                   // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_title>                                  list_title;                                              // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_pet_info>                               list_pet_info;                                           // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_vehicle>                                list_vehicle;                                            // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_item>                                   list_equip_vehicle;                                      // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            list_guild_skill;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TG97[0x20];                                  // 0x00D8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_dic_stat>                               list_dic_stat;                                           // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      guild_mark;                                              // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    reflection_id;                                           // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FC9Y[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_character_situation
	 * Size -> 0x0030
	 */
	struct Fmps_character_situation
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TID;                                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_guild_shipwar_character_state                         State;                                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VFA[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    kill_count;                                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    dead_count;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    contribution_degree;                                     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_character_stat
	 * Size -> 0x0008
	 */
	struct Fmps_character_stat
	{
	public:
		int32_t                                                    hp;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mp;                                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_combo_info
	 * Size -> 0x0014
	 */
	struct Fmps_combo_info
	{
	public:
		int32_t                                                    slot_grade;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    skill_id;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z26U[0xC];                                   // 0x0008(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_combo_info_back
	 * Size -> 0x000C
	 */
	struct Fmps_combo_info_back
	{
	public:
		int32_t                                                    skill_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    slot_level;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    effect;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_comm_character
	 * Size -> 0x0030
	 */
	struct Fmps_comm_character
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    server_index;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    lv;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMVZ[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    power;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VH8[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_comm_equip
	 * Size -> 0x0004
	 */
	struct Fmps_comm_equip
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_comm_equip_list
	 * Size -> 0x0010
	 */
	struct Fmps_comm_equip_list
	{
	public:
		TArray<struct Fmps_comm_equip>                             list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_daily_content
	 * Size -> 0x0010
	 */
	struct Fmps_daily_content
	{
	public:
		int64_t                                                    reset_time;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    condition_limit;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OE0K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_decrement_item_durability
	 * Size -> 0x0018
	 */
	struct Fmps_decrement_item_durability
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_equip_pos                                             Pos;                                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTKN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    dec_val;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_item_durability_decrement_type                        decrement_type;                                          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5HP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_drop_item_info
	 * Size -> 0x0018
	 */
	struct Fmps_drop_item_info
	{
	public:
		int64_t                                                    uid;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tile_index;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_enchant_option
	 * Size -> 0x0008
	 */
	struct Fmps_enchant_option
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_enchant_option_result
	 * Size -> 0x0010
	 */
	struct Fmps_enchant_option_result
	{
	public:
		unsigned char                                              UnknownData_UUFJ[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    result;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_enchant_options
	 * Size -> 0x0010
	 */
	struct Fmps_enchant_options
	{
	public:
		TArray<struct Fmps_enchant_option_result>                  list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_enchant_option_list
	 * Size -> 0x0010
	 */
	struct Fmps_enchant_option_list
	{
	public:
		TArray<struct Fmps_enchant_options>                        Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_enchant_stone
	 * Size -> 0x0008
	 */
	struct Fmps_enchant_stone
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    grade;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_enchant_stone_update
	 * Size -> 0x0018
	 */
	struct Fmps_enchant_stone_update
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KM48[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_enter_character
	 * Size -> 0x0440
	 */
	struct Fmps_enter_character
	{
	public:
		int64_t                                                    auid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              username;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDHX[0x424];                                 // 0x001C(0x0424) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_equip_info
	 * Size -> 0x0010
	 */
	struct Fmps_equip_info
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_equip_pos                                             Pos;                                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7DH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ID;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_equip_info_list
	 * Size -> 0x0010
	 */
	struct Fmps_equip_info_list
	{
	public:
		TArray<struct Fmps_equip_info>                             list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_equip_item_info
	 * Size -> 0x0008
	 */
	struct Fmps_equip_item_info
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reinforce;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_equip_list
	 * Size -> 0x0010
	 */
	struct Fmps_equip_list
	{
	public:
		TArray<int32_t>                                            equip_info;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_buybag_item
	 * Size -> 0x0070
	 */
	struct Fmps_exchange_buybag_item
	{
	public:
		int32_t                                                    expire;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    price;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMBO[0x68];                                  // 0x0008(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_buybag_list
	 * Size -> 0x0010
	 */
	struct Fmps_exchange_buybag_list
	{
	public:
		TArray<struct Fmps_exchange_buybag_item>                   list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_context
	 * Size -> 0x0040
	 */
	struct Fmps_exchange_context
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    auid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cuid;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    euid;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    iuid;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    price;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUF3[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_item_count
	 * Size -> 0x000C
	 */
	struct Fmps_exchange_item_count
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    price;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_item_count_list
	 * Size -> 0x0010
	 */
	struct Fmps_exchange_item_count_list
	{
	public:
		TArray<struct Fmps_exchange_item_count>                    list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_market_price
	 * Size -> 0x0028
	 */
	struct Fmps_exchange_market_price
	{
	public:
		int32_t                                                    min_price;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    min_count;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_price;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_count;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    recent_price;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    recent_count;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    total_count;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    total_price;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_registrant_item
	 * Size -> 0x0030
	 */
	struct Fmps_exchange_registrant_item
	{
	public:
		int64_t                                                    euid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    sell_state;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    expire;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reinforce;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    price;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    sellcount;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    remain;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tax;                                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gold;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XHCC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_registrant_list
	 * Size -> 0x0010
	 */
	struct Fmps_exchange_registrant_list
	{
	public:
		TArray<struct Fmps_exchange_registrant_item>               list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_reinforce_count
	 * Size -> 0x000C
	 */
	struct Fmps_exchange_reinforce_count
	{
	public:
		int32_t                                                    reinforce;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    price;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_reinforce_count_list
	 * Size -> 0x0010
	 */
	struct Fmps_exchange_reinforce_count_list
	{
	public:
		TArray<struct Fmps_exchange_reinforce_count>               list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_exchange_search_item_list
	 * Size -> 0x0010
	 */
	struct Fmps_exchange_search_item_list
	{
	public:
		TArray<struct Fmps_exchange_search_item>                   list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_game_option
	 * Size -> 0x0018
	 */
	struct Fmps_game_option
	{
	public:
		int32_t                                                    option_size;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JTF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      option_data;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_game_setup
	 * Size -> 0x0018
	 */
	struct Fmps_game_setup
	{
	public:
		int32_t                                                    Version;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_gameitem_update
	 * Size -> 0x0068
	 */
	struct Fmps_gameitem_update
	{
	public:
		unsigned char                                              UnknownData_FV9G[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_groupid_info
	 * Size -> 0x0008
	 */
	struct Fmps_groupid_info
	{
	public:
		int32_t                                                    gid;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_dungeon_info
	 * Size -> 0x0030
	 */
	struct Fmps_guild_dungeon_info
	{
	public:
		int64_t                                                    indun_uid;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TID;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAAT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    expire_time;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    open_count_reset_time;                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXA0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      list_open_count;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_dungeon_member_damage
	 * Size -> 0x0010
	 */
	struct Fmps_guild_dungeon_member_damage
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Damage;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL3L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_dungeon_member_damage_info
	 * Size -> 0x0020
	 */
	struct Fmps_guild_dungeon_member_damage_info
	{
	public:
		int32_t                                                    TID;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    kill_monster_count;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    total_monster_hp;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12PD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_guild_dungeon_member_damage>            list;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_league_info
	 * Size -> 0x000C
	 */
	struct Fmps_guild_league_info
	{
	public:
		int32_t                                                    rank;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    score;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    league;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_master_order_quest
	 * Size -> 0x0018
	 */
	struct Fmps_guild_master_order_quest
	{
	public:
		int32_t                                                    quest_tid;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VAR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    expire_time;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    current_finish_member_count;                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGW6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_shipwar_situation
	 * Size -> 0x0020
	 */
	struct Fmps_guild_shipwar_situation
	{
	public:
		TArray<struct Fmps_character_situation>                    guild_member_A;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_character_situation>                    guild_member_B;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_storage_treasure_auction
	 * Size -> 0x00C0
	 */
	struct Fmps_guild_storage_treasure_auction
	{
	public:
		int64_t                                                    auction_uid;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9PS[0x68];                                  // 0x0008(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    expire_time;                                             // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int64_t>                                            list_request_member;                                     // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    final_request_member_count;                              // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4BC[0x2C];                                  // 0x008C(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       finished;                                                // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20BS[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_storage_treasure_request
	 * Size -> 0x0028
	 */
	struct Fmps_guild_storage_treasure_request
	{
	public:
		int64_t                                                    auction_uid;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              member_name;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    price;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WML[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_guild_town_info
	 * Size -> 0x0010
	 */
	struct Fmps_guild_town_info
	{
	public:
		int32_t                                                    town_id;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    table_id;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    rental_end_time;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    continuation_delay_time;                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_inventory
	 * Size -> 0x0018
	 */
	struct Fmps_inventory
	{
	public:
		int32_t                                                    Size;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    weight;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_item>                                   list_item;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_update_goods
	 * Size -> 0x000C
	 */
	struct Fmps_update_goods
	{
	public:
		Empe_good_pos                                              Pos;                                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUN7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Update;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    total;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_add
	 * Size -> 0x0048
	 */
	struct Fmps_item_add
	{
	public:
		TArray<struct Fmps_item_count_update>                      list_update;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_update_goods>                           list_goods;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_item>                                   list_item;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DO3T[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_durability
	 * Size -> 0x0010
	 */
	struct Fmps_item_durability
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    durability;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UAQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_iuid_list
	 * Size -> 0x0010
	 */
	struct Fmps_item_iuid_list
	{
	public:
		TArray<struct Fmps_item_iuid>                              list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_option
	 * Size -> 0x0038
	 */
	struct Fmps_item_option
	{
	public:
		int32_t                                                    reinforce;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    luck;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_enchant_option>                         list_enchant;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSJE[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_enchant_stone>                          list_enchant_stone;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_option_update
	 * Size -> 0x0048
	 */
	struct Fmps_item_option_update
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92ZL[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_item_update
	 * Size -> 0x0020
	 */
	struct Fmps_item_update
	{
	public:
		TArray<struct Fmps_item_count_update>                      list_update;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_item>                                   list_item;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_combo
	 * Size -> 0x0010
	 */
	struct Fmps_list_combo
	{
	public:
		TArray<struct Fmps_combo_info>                             Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_db_buff
	 * Size -> 0x0010
	 */
	struct Fmps_list_db_buff
	{
	public:
		TArray<struct Fmps_db_buff>                                Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_dictionary_info
	 * Size -> 0x0018
	 */
	struct Fmps_list_dictionary_info
	{
	public:
		int32_t                                                    category_id;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SZL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_dictionary_info>                        list;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_dungeon
	 * Size -> 0x0010
	 */
	struct Fmps_list_dungeon
	{
	public:
		TArray<struct Fmps_dungeon>                                Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_int64
	 * Size -> 0x0010
	 */
	struct Fmps_list_int64
	{
	public:
		TArray<int64_t>                                            list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_item_durability
	 * Size -> 0x0010
	 */
	struct Fmps_list_item_durability
	{
	public:
		TArray<struct Fmps_item_durability>                        list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_mentor
	 * Size -> 0x0010
	 */
	struct Fmps_list_mentor
	{
	public:
		TArray<struct Fmps_mentor>                                 Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_meridians
	 * Size -> 0x0018
	 */
	struct Fmps_meridians
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_groupid_info>                           list_acupoints;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_meridians
	 * Size -> 0x0028
	 */
	struct Fmps_list_meridians
	{
	public:
		TArray<struct Fmps_meridians>                              list_meridians;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCIF[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_pet_info
	 * Size -> 0x0010
	 */
	struct Fmps_list_pet_info
	{
	public:
		TArray<struct Fmps_pet_info>                               Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_quest
	 * Size -> 0x0010
	 */
	struct Fmps_list_quest
	{
	public:
		TArray<struct Fmps_quest>                                  list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_reward_value
	 * Size -> 0x0010
	 */
	struct Fmps_list_reward_value
	{
	public:
		TArray<struct Fmps_reward_value>                           Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_vehicle_equip_item
	 * Size -> 0x0018
	 */
	struct Fmps_vehicle_equip_item
	{
	public:
		Empe_equip_pos                                             Pos;                                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJP5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    iuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    equip_index;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYI8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_list_vehicle_equip_item
	 * Size -> 0x0010
	 */
	struct Fmps_list_vehicle_equip_item
	{
	public:
		TArray<struct Fmps_vehicle_equip_item>                     list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_lobby_character
	 * Size -> 0x0078
	 */
	struct Fmps_lobby_character
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    zone_id;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    power;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    lasttime;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_1;                                                 // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_2;                                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_3;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    customzing_data;                                         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              is_first_story;                                          // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHYL[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    auto_battle_free_time;                                   // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    auto_battle_pay_time;                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       auto_battle_onoff;                                       // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROLM[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    auto_battle_login_time;                                  // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    auto_battle_logout_time;                                 // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              summon_skill_level;                                      // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MYT[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    delete_date;                                             // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reflection_id;                                           // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKOS[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_lobby_gameinfo
	 * Size -> 0x0058
	 */
	struct Fmps_lobby_gameinfo
	{
	public:
		int32_t                                                    awaiter_count;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       quicklogin;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HW9C[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              board_url;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              server_ip;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    server_port;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0JY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              community_ip;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    community_port;                                          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    dungeon_id;                                              // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              event_url;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_lobby_player
	 * Size -> 0x0028
	 */
	struct Fmps_lobby_player
	{
	public:
		int64_t                                                    last_cuid;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int64_t>                                            list_cuid;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_lobby_character>                        list_character;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_login_character
	 * Size -> 0x0030
	 */
	struct Fmps_login_character
	{
	public:
		int32_t                                                    gid;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QT6I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    cuid;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    lasttime;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04FW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_login_account
	 * Size -> 0x00A0
	 */
	struct Fmps_login_account
	{
	public:
		class FString                                              username;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    auid;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    lastgid;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5GC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    lastcuid;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_login_character>                        list_character;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		Empe_adult_grade                                           grade;                                                   // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XLCX[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              password;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    lastlogin;                                               // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    play_time;                                               // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       auth_lock;                                               // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F56E[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              player_key;                                              // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_os_type                                               os_type;                                                 // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_channel_type                                          channel_type;                                            // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_store_type                                            store_type;                                              // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5H3K[0x5];                                   // 0x0073(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ip_address;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              unique_client_id;                                        // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    lasttime;                                                // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25PA[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_lord_bless_info
	 * Size -> 0x0028
	 */
	struct Fmps_lord_bless_info
	{
	public:
		TArray<struct Fmps_lord_bless_buff>                        bless_buff;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    bless_point;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPRX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lord_message;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_lord_statue_info
	 * Size -> 0x001C
	 */
	struct Fmps_lord_statue_info
	{
	public:
		Empe_siege_castle_type                                     castle_type;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SPW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TID;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    customizing_data;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    equip_weapon;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    equip_armor;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    equip_helmet;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reflection_id;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_make_result
	 * Size -> 0x0008
	 */
	struct Fmps_make_result
	{
	public:
		Empe_make_result                                           result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQHN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_make_result_list
	 * Size -> 0x0010
	 */
	struct Fmps_make_result_list
	{
	public:
		TArray<struct Fmps_make_result>                            list_result;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_meridians_back
	 * Size -> 0x0018
	 */
	struct Fmps_meridians_back
	{
	public:
		int32_t                                                    meridians_id;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            list_acupoints;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_object_list
	 * Size -> 0x0010
	 */
	struct Fmps_object_list
	{
	public:
		TArray<int64_t>                                            uid;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_party_base
	 * Size -> 0x0038
	 */
	struct Fmps_party_base
	{
	public:
		int64_t                                                    puid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    owner_uid;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Category;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    need_level_min;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    need_level_max;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_party_loot                                            loot;                                                    // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_party_join                                            join;                                                    // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RCA[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              party_name;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              auto_start;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MLO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_player_character
	 * Size -> 0x0038
	 */
	struct Fmps_player_character
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nickname;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    zone_id;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    power;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    lasttime;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_1;                                                 // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_2;                                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_3;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_player
	 * Size -> 0x0018
	 */
	struct Fmps_player
	{
	public:
		int64_t                                                    last_cuid;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_player_character>                       list_character;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_profesion_update
	 * Size -> 0x0078
	 */
	struct Fmps_profesion_update
	{
	public:
		unsigned char                                              UnknownData_CCHE[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      list_result;                                             // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_quest_area
	 * Size -> 0x0008
	 */
	struct Fmps_quest_area
	{
	public:
		int32_t                                                    area_id;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    area_quest_finish_count;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_quest_history
	 * Size -> 0x0060
	 */
	struct Fmps_quest_history
	{
	public:
		int32_t                                                    last_main_id;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    repute_quest_last_reset_time;                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    repute_quest_finish_count;                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    repute_quest_last_daily_reset_time;                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    repute_quest_daily_reset_count;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    guild_quest_finish_count;                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    guild_quest_last_reset_time;                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    guild_office_quest_finish_count;                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    guild_office_quest_last_reset_time;                      // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    profession_quest_count;                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XKI9[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      profession_quest_data;                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    profession_quest_reset_time;                             // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    area_quest_finish_count;                                 // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    area_quest_finish_count_reset_time;                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              field_boss_kill_count;                                   // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              arena_join_count;                                        // 0x005D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQ5Q[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_quest_reward
	 * Size -> 0x0018
	 */
	struct Fmps_quest_reward
	{
	public:
		int32_t                                                    quest_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8D44[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            reward_tid;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_repute_quest
	 * Size -> 0x0008
	 */
	struct Fmps_repute_quest
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_questbook
	 * Size -> 0x00C8
	 */
	struct Fmps_questbook
	{
	public:
		unsigned char                                              UnknownData_726B[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_quest>                                  list_quest;                                              // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_quest_reward>                           list_quest_reward;                                       // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_repute_quest>                           list_repute_quest;                                       // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_achieve_info>                           list_achieve;                                            // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      list_tutorial;                                           // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_quest>                                  list_tutorial_quest;                                     // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_ranking_history_new
	 * Size -> 0x0018
	 */
	struct Fmps_ranking_history_new
	{
	public:
		Empe_ranking_type                                          rank_type;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TPK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    rank;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    score;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    profesion_level;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    before_rank;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_received_mail
	 * Size -> 0x0028
	 */
	struct Fmps_received_mail
	{
	public:
		Empe_mail_type                                             mail_type;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXPN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_mail>                                   list_mail;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            list_delete_muid;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_redis_community_character
	 * Size -> 0x0020
	 */
	struct Fmps_redis_community_character
	{
	public:
		int64_t                                                    cuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    server_index;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    power;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_1;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_2;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Equip_3;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_repute_quest_list
	 * Size -> 0x0010
	 */
	struct Fmps_repute_quest_list
	{
	public:
		TArray<struct Fmps_repute_quest>                           list_repute_quest;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_seal_device_info
	 * Size -> 0x0008
	 */
	struct Fmps_seal_device_info
	{
	public:
		Empe_seal_device_state                                     State;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZM7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    wait_time;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_server_info
	 * Size -> 0x0018
	 */
	struct Fmps_server_info
	{
	public:
		class FString                                              ip;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04TI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_server_inspection
	 * Size -> 0x0048
	 */
	struct Fmps_server_inspection
	{
	public:
		class FString                                              title_text;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    start_time;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    end_time;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              content_text;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              notice_url;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              patch_url;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_siege_result_score
	 * Size -> 0x0030
	 */
	struct Fmps_siege_result_score
	{
	public:
		Empe_siege_team_index                                      victory_team;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2R9L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    play_time;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              atk_user_count;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              def_user_count;                                          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TIW[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            destroy_wall_time;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    destroy_all_def_tower_time;                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFUT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    win_guild_uid;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_siege_warfare_alliance
	 * Size -> 0x0010
	 */
	struct Fmps_siege_warfare_alliance
	{
	public:
		int64_t                                                    Guid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       accept;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PT8N[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_siege_warfare_info
	 * Size -> 0x0060
	 */
	struct Fmps_siege_warfare_info
	{
	public:
		Empe_siege_castle_type                                     castle_type;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_siege_warfare_state                                   State;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KKX[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    siege_time;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    first_guid;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    current_tender;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    next_min_tender;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    next_max_tender;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3JM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fmps_siege_warfare_alliance>                 alliance_info;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    siege_start_time;                                        // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_siege_machine>                          atk_machine;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_siege_machine>                          def_machine;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_skill_list
	 * Size -> 0x0010
	 */
	struct Fmps_skill_list
	{
	public:
		TArray<struct Fmps_skill>                                  list;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_skillbook
	 * Size -> 0x0020
	 */
	struct Fmps_skillbook
	{
	public:
		TArray<struct Fmps_skill>                                  list_skill;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_skill>                                  list_passive;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_slot
	 * Size -> 0x0010
	 */
	struct Fmps_slot
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pos;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NHQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_slot_list
	 * Size -> 0x0010
	 */
	struct Fmps_slot_list
	{
	public:
		TArray<struct Fmps_slot>                                   list_slot;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_special_move
	 * Size -> 0x0008
	 */
	struct Fmps_special_move
	{
	public:
		int32_t                                                    skill_id;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    slot_level;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_stat_update
	 * Size -> 0x0020
	 */
	struct Fmps_stat_update
	{
	public:
		int64_t                                                    object_uid;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    buff_uid;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_ability_value>                          update_list;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_storage_move_insert
	 * Size -> 0x0070
	 */
	struct Fmps_storage_move_insert
	{
	public:
		unsigned char                                              UnknownData_CCKL[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Pos;                                                     // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADP3[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_storage_move_update
	 * Size -> 0x0020
	 */
	struct Fmps_storage_move_update
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Update;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    total;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pos;                                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    before_pos;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       new_flag;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFDC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_storage_move
	 * Size -> 0x0030
	 */
	struct Fmps_storage_move
	{
	public:
		TArray<struct Fmps_storage_move_insert>                    Item;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_storage_move_update>                    Update;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct Fmps_storage_move_goods>                     goods;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_info
	 * Size -> 0x0048
	 */
	struct Fmps_street_stall_info
	{
	public:
		int64_t                                                    suid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TID;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    profesion_table_id;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              street_stall_title;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    use_count;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZ84[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    reset_time;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cool_time;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    life_time;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    channel_id;                                              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBWQ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_item_enchant_option_change
	 * Size -> 0x0010
	 */
	struct Fmps_street_stall_item_enchant_option_change
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_item_reinforce_position                               Pos;                                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLBM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_item_enchant_option_change_result
	 * Size -> 0x0070
	 */
	struct Fmps_street_stall_item_enchant_option_change_result
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5B6[0x68];                                  // 0x0008(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_item_enchant_option_make
	 * Size -> 0x0010
	 */
	struct Fmps_street_stall_item_enchant_option_make
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_item_reinforce_position                               Pos;                                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYAL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    lock_slot;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_item_enchant_option_make_result
	 * Size -> 0x0070
	 */
	struct Fmps_street_stall_item_enchant_option_make_result
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTU3[0x68];                                  // 0x0008(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_item_luck_reinforce
	 * Size -> 0x0020
	 */
	struct Fmps_street_stall_item_luck_reinforce
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_item_reinforce_position                               flag;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQ6G[0x17];                                  // 0x0009(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_item_luck_reinforce_result
	 * Size -> 0x00A0
	 */
	struct Fmps_street_stall_item_luck_reinforce_result
	{
	public:
		Empe_luck_reinforce_result                                 result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7S3[0x9F];                                  // 0x0001(0x009F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_item_reinforce
	 * Size -> 0x0028
	 */
	struct Fmps_street_stall_item_reinforce
	{
	public:
		int64_t                                                    iuid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_item_reinforce_position                               flag;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SKA[0x17];                                  // 0x0009(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Empe_reinforce_stone_type                                  stone_type;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TI4H[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_item_reinforce_result
	 * Size -> 0x00A8
	 */
	struct Fmps_street_stall_item_reinforce_result
	{
	public:
		Empe_reinforce_result                                      result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUGS[0x9F];                                  // 0x0001(0x009F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    max_durability;                                          // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXNT[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_street_stall_object_info
	 * Size -> 0x0038
	 */
	struct Fmps_street_stall_object_info
	{
	public:
		int64_t                                                    suid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    owner_cuid;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TID;                                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    profesion_table_id;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    profesion_grade;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6KJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              street_stall_title;                                      // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    npc_info;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MA5[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_target_info
	 * Size -> 0x0010
	 */
	struct Fmps_target_info
	{
	public:
		int64_t                                                    UUID;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tile_index;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_update_exp
	 * Size -> 0x0010
	 */
	struct Fmps_update_exp
	{
	public:
		int64_t                                                    Update;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    total;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_update_goods_list
	 * Size -> 0x0010
	 */
	struct Fmps_update_goods_list
	{
	public:
		TArray<struct Fmps_update_goods>                           list_goods;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_vector
	 * Size -> 0x000C
	 */
	struct Fmps_vector
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_vector2d
	 * Size -> 0x0008
	 */
	struct Fmps_vector2d
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_wanted_murder
	 * Size -> 0x0010
	 */
	struct Fmps_wanted_murder
	{
	public:
		int64_t                                                    record_id;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    target_cuid;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_wanted_murder_info_list
	 * Size -> 0x0010
	 */
	struct Fmps_wanted_murder_info_list
	{
	public:
		TArray<struct Fmps_wanted_murder_info>                     Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_wanted_murder_list
	 * Size -> 0x0010
	 */
	struct Fmps_wanted_murder_list
	{
	public:
		TArray<struct Fmps_wanted_murder>                          Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_wanted_murder_register_info_list
	 * Size -> 0x0010
	 */
	struct Fmps_wanted_murder_register_info_list
	{
	public:
		TArray<struct Fmps_wanted_murder_register_info>            Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_wanted_murder_reward_info_list
	 * Size -> 0x0010
	 */
	struct Fmps_wanted_murder_reward_info_list
	{
	public:
		TArray<struct Fmps_wanted_murder_reward_info>              Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_character_minion
	 * Size -> 0x0028
	 */
	struct Fmps_zone_character_minion
	{
	public:
		int64_t                                                    owner_uid;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    hp;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_buff>                                   buff_list;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       respawn;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01RU[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_collect_info
	 * Size -> 0x0008
	 */
	struct Fmps_zone_collect_info
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4A0L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    count;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_drop_item_info
	 * Size -> 0x0020
	 */
	struct Fmps_zone_drop_item_info
	{
	public:
		TArray<struct Fmps_drop_item_info>                         Info;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    create_time;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_drop_owner                                            owner_type;                                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DL0Y[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_fixed_object_info
	 * Size -> 0x0010
	 */
	struct Fmps_zone_fixed_object_info
	{
	public:
		int32_t                                                    hp;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    table_index;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              phase;                                                   // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V49X[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_info
	 * Size -> 0x0010
	 */
	struct Fmps_zone_info
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_mercenary_info
	 * Size -> 0x000C
	 */
	struct Fmps_zone_mercenary_info
	{
	public:
		int32_t                                                    hp;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              phase;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IHC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_monster_info
	 * Size -> 0x0038
	 */
	struct Fmps_zone_monster_info
	{
	public:
		int32_t                                                    hp;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_move_type                                             move_type;                                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL8H[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    end_cell;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_buff>                                   buff_list;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    contribution_uid;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       appeared;                                                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPYY[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    object_id;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    phase_change_state;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YCY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_npc_info
	 * Size -> 0x0014
	 */
	struct Fmps_zone_npc_info
	{
	public:
		int32_t                                                    hp;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mp;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mmp;                                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    object_id;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_player_avatar_info
	 * Size -> 0x00A0
	 */
	struct Fmps_zone_player_avatar_info
	{
	public:
		class FString                                              nick;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    avatar_id;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              class_type;                                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEBK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    hp;                                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mp;                                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_character_action                                      action;                                                  // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_move_type                                             move_type;                                               // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4UW[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            list_equip;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    puid;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mmp;                                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_buff>                                   buff_list;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    pk_point;                                                // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_pk_color                                              Color;                                                   // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADXU[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    vehicle_id;                                              // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    weight_id;                                               // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    curr_cell;                                               // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_direction                                             Direction;                                               // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNIC[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Guid;                                                    // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      atk_speed;                                               // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    pet_id;                                                  // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    customzing_data;                                         // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    title_id;                                                // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              is_beginner_guild;                                       // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZPZ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_player_info
	 * Size -> 0x00D8
	 */
	struct Fmps_zone_player_info
	{
	public:
		class FString                                              nick;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    hp;                                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mp;                                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_character_action                                      action;                                                  // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_move_type                                             move_type;                                               // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M3A[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            list_equip;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    puid;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mmp;                                                     // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct Fmps_buff>                                   buff_list;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    pk_point;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_pk_color                                              Color;                                                   // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVJZ[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    vehicle_id;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    weight_id;                                               // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    curr_cell;                                               // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Empe_direction                                             Direction;                                               // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJD6[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Guid;                                                    // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              guild_name;                                              // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      atk_speed;                                               // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    pet_id;                                                  // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    customzing_data;                                         // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    title_id;                                                // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              is_beginner_guild;                                       // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_transform_avatar;                                     // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQLU[0x26];                                  // 0x0092(0x0026) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              wanted_murder_grade;                                     // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3F38[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      guild_mark;                                              // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       revive_request_state;                                    // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3WK[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    reflection_id;                                           // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_siege_weapon_info
	 * Size -> 0x0010
	 */
	struct Fmps_zone_siege_weapon_info
	{
	public:
		int32_t                                                    hp;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mhp;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    table_index;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              phase;                                                   // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       is_open_gate;                                            // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOZR[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProtocolPlugins.mps_zone_treasure_box_info
	 * Size -> 0x0018
	 */
	struct Fmps_zone_treasure_box_info
	{
	public:
		int64_t                                                    owner_uid;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    keep_time;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit_time;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    item_id;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9W0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
