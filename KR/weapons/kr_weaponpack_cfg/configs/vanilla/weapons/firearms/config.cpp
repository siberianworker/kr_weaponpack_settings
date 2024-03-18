class CfgPatches
{
	class DZ_Weapons_Firearms_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Firearms_VSS"};
	};
};

class cfgWeapons
{
	class Rifle_Base;
	class Muzzle_Base;
	class Pistol_Base;
	class BoltActionRifle_ExternalMagazine_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class Shotgun_Base;
	class Aug_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};};
	class B95_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};class SecondMuzzle: Muzzle_Base{chamberableFrom[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};	};};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base{chamberableFrom[] += {"kr_Ammo_762x39_AP","kr_Ammo_762x39_fmj","kr_Ammo_762x39_t45m","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_us","kr_Ammo_762x39_bp"};};
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base{chamberableFrom[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};};
	class Famas_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};};
	class Izh18_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_762x39_AP","kr_Ammo_762x39_fmj","kr_Ammo_762x39_t45m","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_us","kr_Ammo_762x39_bp"};};
	class M14_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};};
	class M16A2_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};};
	class Scout_Base: BoltActionRifle_ExternalMagazine_Base{chamberableFrom[] += {"kr_Ammo_556x45_FMJ","kr_Ammo_556x45_m855","kr_Ammo_556x45_m855a1","kr_Ammo_556x45_m856","kr_Ammo_556x45_m995","kr_Ammo_556x45_warmageddon"};};
	class SKS_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_762x39_AP","kr_Ammo_762x39_fmj","kr_Ammo_762x39_t45m","kr_Ammo_762x39_mai_ap","kr_Ammo_762x39_ps","kr_Ammo_762x39_pp","kr_Ammo_762x39_us","kr_Ammo_762x39_bp"};};
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base{chamberableFrom[] += {"kr_Ammo_545x39_BS","kr_Ammo_545x39_US","kr_Ammo_545x39_T","kr_Ammo_545x39_PS","kr_Ammo_545x39_PRS","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_BT"};};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base{chamberableFrom[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};};
	class CZ61_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};};
	class PP19_Base: Rifle_Base{chamberableFrom[] += {"kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};};
	class MakarovIJ70_Base: Pistol_Base{chamberableFrom[] += {"kr_Ammo_9x18_ppt_gz","kr_Ammo_9x18_pbm_gz","kr_Ammo_9x18_pmm_gz","kr_Ammo_9x18_pso_gz","kr_Ammo_9x18_pst_gz","kr_Ammo_9x18_sp7_gz"};};
	class P1_Base: Pistol_Base{chamberableFrom[] += {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip"};};
	class LongHorn_Base: Pistol_Base{chamberableFrom[] += {"kr_Ammo_762x51_ultra_nosler","kr_Ammo_762x51_tpz_sp","kr_Ammo_762x51_m993","kr_Ammo_762x51_m80","kr_Ammo_762x51_m61","kr_Ammo_762x51_bpz_fmj"};};
	class Glock19_Base: Pistol_Base{chamberableFrom[] += {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip"};};
	class CZ75_Base: Pistol_Base{chamberableFrom[] += {"kr_Ammo_9x19_7n21","kr_Ammo_9x19_7n31","kr_Ammo_9x19_ap_63","kr_Ammo_9x19_gt","kr_Ammo_9x19_pso_gz","kr_Ammo_9x19_quakemaker","kr_Ammo_9x19_rip"};};
	class Izh43Shotgun_Base: Shotgun_Base{chamberableFrom[] += {"kr_Ammo_12x76_devastator","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_AP20","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_RIP","kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8"};};
	class Izh18Shotgun_Base: Shotgun_Base{chamberableFrom[] += {"kr_Ammo_12x76_devastator","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_AP20","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_RIP","kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8"};};
};