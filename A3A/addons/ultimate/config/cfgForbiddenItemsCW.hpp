// We don't want droid heads going unlimited, but we do want them to appear in crates.
// The economy is based off of selling things to the arms dealer, so if they go unlimited it breaks.
class CWDependencies_Mando_DroidHelmet : forbidden_limited_base {appearInCrates = 1};
class lsd_cis_oom_Geonosis_helmet : CWDependencies_Mando_DroidHelmet {};
class ls_cis_b1_helmet : CWDependencies_Mando_DroidHelmet {};
class lsd_cis_b1Geonosis_helmet : CWDependencies_Mando_DroidHelmet {};
class lsd_cis_b1Saboteur_helmet : CWDependencies_Mando_DroidHelmet {};
class lsd_cis_b1Training_helmet : CWDependencies_Mando_DroidHelmet {};
class lsd_cis_oomCrew_helmet : CWDependencies_Mando_DroidHelmet {};
class lsd_cis_oomOfficer_helmet : CWDependencies_Mando_DroidHelmet {};

class lsd_cis_oomCrew_uniform : forbidden_limited_base {};
class ls_cis_b1Droid_uniform : forbidden_limited_base {};
class lsd_cis_bxDroid_uniform : forbidden_limited_base {};
class lsd_cis_oomPilot_uniform : forbidden_limited_base {};
class 3AS_U_CIS_TS : forbidden_limited_base {};

// Completely blacklist sim stuff, it looks dumb
class lsd_cis_b1Simulation_helmet : forbidden_limited_base {};
class ls_cis_b1Hologram_helmet : forbidden_limited_base {};
class SWLB_clone_holo_P15_helmet : forbidden_limited_base {};
class SWLB_clone_holo_P1_helmet : forbidden_limited_base {};
class SWLB_clone_holo_P2_helmet : forbidden_limited_base {};
class lsd_hologram_arc_helmet : forbidden_limited_base {};
class ls_gar_arcHologram_helmet : forbidden_limited_base {};
class ls_gar_atrtDriverHologram_helmet : forbidden_limited_base {};
class lsd_hologram_atrtDriver_helmet : forbidden_limited_base {};
class ls_gar_barcHologram_helmet : forbidden_limited_base {};
class ls_gar_desertHologram_helmet : forbidden_limited_base {};
class lsd_hologram_commando_helmet : forbidden_limited_base {};
class ls_gar_phase1ArfHologram_helmet : forbidden_limited_base {};
class ls_gar_phase2ArfHologram_helmet : forbidden_limited_base {};
class ls_gar_phase2Hologram_helmet : forbidden_limited_base {};
class lsd_hologram_phase2_helmet : forbidden_limited_base {};
class lsd_hologram_senateGuard_helmet : forbidden_limited_base {};
class lsd_simulation_b1Standard_backpack : forbidden_limited_base {};
class lsd_simulation_b1Antenna_backpack : forbidden_limited_base {};
class lsd_hologram_standard_backpack : forbidden_limited_base {};
class SWLB_clone_holo_arc_backpack : forbidden_limited_base {};
class lsd_hologram_antenna_backpack : forbidden_limited_base {};

// I would like to have some kind words with the JLTS developer
class JLTS_credits_10 : forbidden_limited_base {appearInCrates = 1};
class JLTS_credits_50 : JLTS_credits_10 {};
class JLTS_credits_100 : JLTS_credits_10 {};
class JLTS_credits_500 : JLTS_credits_10 {};
class JLTS_credits_1000 : JLTS_credits_10 {};
class JLTS_credits_5000 : JLTS_credits_10 {};
class JLTS_flan_10 : JLTS_credits_10 {};
class JLTS_flan_50 : JLTS_credits_10 {};
class JLTS_flan_100 : JLTS_credits_10 {};
class JLTS_flan_500 : JLTS_credits_10 {};
class JLTS_flan_1000 : JLTS_credits_10 {};
class JLTS_flan_5000 : JLTS_credits_10 {};
class JLTS_credit_card : JLTS_credits_10 {};

class JLTS_drugs_deathstick : forbidden_limited_base {};
class JLTS_drugs_electrolit : forbidden_limited_base {};
class JLTS_drugs_protein : forbidden_limited_base {};
class JLTS_drugs_bacta : forbidden_limited_base {};
class JLTS_drugs_bacta_red : forbidden_limited_base {};
class JLTS_drugs_kolto : forbidden_limited_base {};
class JLTS_drugs_medikit : forbidden_limited_base {};
class JLTS_drugs_stimulant_adrenal : forbidden_limited_base {};
class JLTS_drugs_stimulant_battle : forbidden_limited_base {};
class JLTS_drugs_stimulant_echaniBattle : forbidden_limited_base {};
class JLTS_drugs_stimulant_hyperAdrenal : forbidden_limited_base {};
class JLTS_drugs_stimulant_hyperBattle : forbidden_limited_base {};

class JLTS_ids_rep_civ : forbidden_limited_base {};
class JLTS_ids_license_driver_small : forbidden_limited_base {};
class JLTS_ids_license_driver_medium : forbidden_limited_base {};
class JLTS_ids_license_driver_large : forbidden_limited_base {};
class JLTS_ids_police : forbidden_limited_base {};
class JLTS_ids_license_weapon_secondary : forbidden_limited_base {};
class JLTS_ids_license_weapon_primary : forbidden_limited_base {};
class JLTS_ids_gar_army : forbidden_limited_base {};
class JLTS_ids_gar_medical : forbidden_limited_base {};
class JLTS_ids_gar_navy : forbidden_limited_base {};
class JLTS_intel_bountypuck : forbidden_limited_base {};
class JLTS_intel_briefcase : forbidden_limited_base {};
class JLTS_intel_datapad_civ : forbidden_limited_base {};
class JLTS_intel_datacard : forbidden_limited_base {};
class JLTS_intel_holocron_jedi : forbidden_limited_base {};
class JLTS_intel_lightsaber_01 : forbidden_limited_base {};
class JLTS_intel_holoProjector : forbidden_limited_base {};
class JLTS_intel_holocron_sith : forbidden_limited_base {};
class JLTS_intel_trackingFob : forbidden_limited_base {};
class JLTS_icecream : forbidden_limited_base {};
class JLTS_pazaak_deck : forbidden_limited_base {};
class JLTS_sabacc_deck : forbidden_limited_base {};
class JLTS_scanner_bounty : forbidden_limited_base {};
class JLTS_scanner_police : forbidden_limited_base {};
class JLTS_riot_shield_droid_item : forbidden_limited_base {};
class JLTS_droidCaller : forbidden_limited_base {};
class JLTS_riot_shield_item : forbidden_limited_base {};
class JLTS_riot_shield_101_item : forbidden_limited_base {};
class JLTS_riot_shield_212_item : forbidden_limited_base {};
class JLTS_riot_shield_501_item : forbidden_limited_base {};
class JLTS_riot_shield_CG_item : forbidden_limited_base {};
class JLTS_riot_shield_GD_item : forbidden_limited_base {};
class JLTS_MSE6_toolkit : forbidden_limited_base {};
class JLTS_MSE6_manual : forbidden_limited_base {};

class JLTS_repairkit_weapon_mini : forbidden_unlimited_base {};
class JLTS_repairkit_weapon : forbidden_unlimited_base {};

class 442_BasicBandage : forbidden_limited_base {};
class 442_BactaBandage : forbidden_limited_base {};
class 442_BactaPack : forbidden_limited_base {};
class 442_Cauterizer : forbidden_limited_base {};
class 442_MyoplexarilStim : forbidden_limited_base {};
class 442_PerigenStim : forbidden_limited_base {};
class 442_PolybioticsStim : forbidden_limited_base {};
class 442_Vasko1000 : forbidden_limited_base {};
class 442_Vasko500 : forbidden_limited_base {};
class 442_Vasko250 : forbidden_limited_base {};

class ls_meme_favoritesOfForce_item : forbidden_limited_base {};
class ls_holoprojector_bountyPuck : forbidden_limited_base {};
class ls_meme_graciousGovernmentMix_item : forbidden_limited_base {};

class CW_DroidParts : forbidden_limited_base {appearInCrates = 1};