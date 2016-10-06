#if defined _zp50_grenade_frost_included
  #endinput
#endif
#define _zp50_grenade_frost_included

#include <zp50_core>

#if AMXX_VERSION_NUM >= 175
	#pragma reqlib zp50_grenade_frost
	#if !defined AMXMODX_NOAUTOLOAD
		#pragma loadlib zp50_grenade_frost
	#endif
#else
	#pragma library zp50_grenade_frost
#endif


/**
 * Returns whether a player is frozen.
 *
 * @param id		Player index.
 */
native zp_grenade_frost_get(id)

/**
 * Called when a player is about to be frozen.
 * Returning PLUGIN_HANDLED will block it.
 *
 * @param id		Player index.
 */
forward zp_fw_grenade_frost_pre(id)

/**
 * Called after a player recovers from a frost nade.
 *
 * @param id		Player index.
 */
forward zp_fw_grenade_frost_unfreeze(id)
