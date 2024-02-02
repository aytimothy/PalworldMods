#include "PalDebugSetting.h"

UPalDebugSetting::UPalDebugSetting() {
    this->bEnableCommandToServer = false;
    this->EditorPlayTextLanguageType = EPalLanguageType::JP;
    this->IsRequiredLoadPlayerSaveData = true;
    this->DefaultLoadPlayerSaveDataName = TEXT("Autosave_P");
    this->IsRequiredLoadWorldSaveData = true;
    this->DefaultLoadWorldSaveDataName = TEXT("Autosave_W");
    this->bIsRequiredLoadLocalWorldSaveData = true;
    this->PlayerAutoSaveDataName = TEXT("Autosave_P");
    this->WorldAutoSaveDataName = TEXT("Autosave_W");
    this->bDontAutoSaveInMulti = false;
    this->EditorSaveDirectoryName = TEXT("EditorSaveData");
    this->autoSaveSpan = -1.00f;
    this->autoSaveEnable = true;
    this->bAutoSetTruePalMainStats = false;
    this->PlayerLevel = 1;
    this->ForceFixLevelForWildPal = 0;
    this->ForceFixTalent = -1;
    this->DefaultCapturePalRandomNum = 0;
    this->PlayStart_PalWorldTime = -1;
    this->DebugRate_PalWorldTime = 1.00f;
    this->bIgnoreOverWeightMove = false;
    this->bIsDisableReticleShoot = false;
    this->bEquipDefaultWeapon = false;
    this->bGetAllBulletItems = false;
    this->bIgnoreItemDurabilityDecrease = false;
    this->bNotConsumeMaterialsInRepair = false;
    this->bIsMutekiALL = false;
    this->bIsMutekiForPlayer = false;
    this->bIsMutekiForFriend = false;
    this->bDisableDeathPenalty = false;
    this->bIgnoreRespawnTimer = false;
    this->bIsDisableDyingCountdown = false;
    this->bIsFixedSP = false;
    this->bDisiablePlayerShield = false;
    this->bIsFullPowerForPlayer = false;
    this->bIsCaptureSuccessAlways = false;
    this->bIsCaptureFailAlways_BounceBall = false;
    this->bIsShowActionName = false;
    this->bIsShowCharacterStatus = false;
    this->bIsShowCharacterTickInfo = false;
    this->bIsWazaCoolTimeFast = false;
    this->bIsShowUseRootMotion = false;
    this->bIsEnableClimbing = true;
    this->bIsDisableFallDamage = false;
    this->bIsShowPlayerFallHeight = false;
    this->bIsShowGroundObjectName = false;
    this->bIsShowForwardObjectName = false;
    this->bDisableStatus_Darkness = false;
    this->bIsIgnoreBuildRestrictionBaseCamp = false;
    this->ConfirmTransportItemBaseSpeedType = EPalMovementSpeedType::Run;
    this->ConfirmTransportItemSpeedMultipleRate = 1.00f;
    this->bNotConsumeMaterialsInBuild = false;
    this->BuildRequiredWorkAmount = 0.00f;
    this->bIsDisableEnemyEyeSight = false;
    this->bIsEnableNPCDrawRaycastDebug = false;
    this->bIsHideScreenMessage = false;
    this->bIsHungerDisable = false;
    this->bIsAllRecipeUnlock = false;
    this->bNotDecreaseWeaponItem = false;
    this->bNotRequiredBulletWhenReload = false;
    this->bShowReticleLocation = false;
    this->bShowAutoAimInfo = false;
    this->bIsEnableMouseAutoAim = false;
    this->MouseSensitivityRate = -1.00f;
    this->CaptureFPS = 0;
    this->bIsDisableDropItem = false;
    this->bShowDropItemHitEvent = false;
    this->bPrintLogGroupsWhenGroupOperated = false;
    this->bIsSoundRangeVisual = false;
    this->bIsToggleHUDWhenEject = false;
    this->bIsLookAtDisable = false;
    this->bPalBoxInLevelBelongingToServerPlayer = true;
    this->bCreateGameInstanceViewActor = false;
    this->bIsFixedLightingControllerTime = false;
    this->LightingControllerTimeIfFixed = 10.00f;
    this->bIsShowFloorLocation = false;
    this->bIsShowGroundTilt = false;
    this->bIsDisableShiftKey = false;
    this->IsSpawnAlwaysFromSpawner = false;
    this->IsDisableSpawner = false;
    this->OverrideSpawnRadius = -1.00f;
    this->OverrideDespawnRadius = -1.00f;
    this->bIsPlayerCompleteSTEALTH = false;
    this->bIsShowEnemyHate = false;
    this->bIsShowEnemyHateArrow = false;
    this->bIsShowTargetLocalPlayerList = false;
    this->bIsShowMovementMode = false;
    this->bIsShowOrganization = false;
    this->bCanAccessToOtherGuildMapObject = false;
    this->bFirstBuildPalBox = false;
    this->WorkExtraRate = 1.00f;
    this->bIsDisableFootIK = false;
    this->bBuildInstallCheckLookToCamera = true;
    this->bBuildFXDebugLog = false;
    this->bDamageTextStack = false;
    this->bFootStepNotify_DebugDisplay = false;
    this->bSkipBossCutscene = false;
    this->bShowRangeDistributeExpAround = false;
    this->bNotDropOtomoAtPlayerDeath = false;
    this->bNotDropItemsAtPlayerDeath = false;
    this->bEnableDebugMoveSpeed = false;
    this->bForceToggleDash = false;
    this->bDebugAutoRun = false;
    this->bDrawPlayerInDoor = false;
    this->PlayerPalStoragePage = -1;
    this->ShowPlayerMoveSpeed = false;
    this->bSwimming_DebugDisplay = false;
    this->bSwimming_NoDecreaseSP = false;
    this->bPartnerSkill_DebugDisplay = false;
    this->bPartnerSkill_NoDecrease = false;
    this->PartnerSkill_CooldownSpeedRate = 1.00f;
    this->PartnerSkill_IgnoreRestrictedByItems = false;
    this->bNotConsumeMaterialsInCraft = false;
    this->bSelectableRecipeWhenNothingMaterials = false;
    this->bIgnoreWorkableElementType = false;
    this->bIgnoreWorkableGenusCategories = false;
    this->bShowDebugWorkAssign = false;
    this->bShowDebugWorkAssignTarget = false;
    this->bForceRunInWork = false;
    this->bContinueSpeedInTransportWork = false;
    this->bNotInterruptTransportingWork = false;
    this->bPrintLogWorkerEventDetail = false;
    this->BaseCampWorkerEventTriggerInterval = -1.00f;
    this->IgnoreBaseCampTask = false;
    this->bBaseCampSpawnLevelMax = false;
    this->bBaseCampWorkerSanityDetail = false;
    this->BaseCampWorkerEatTime = 0.00f;
    this->bBaseCampShowCannotTransportTarget = false;
    this->bBaseCampMoveModeTeleportForce = false;
    this->bVisibleSpawnPointFromPalBox = false;
    this->fallBackDefense = 0;
    this->bDebugLogWorldSecurity = false;
    this->bDebugLogEnableCriminal = false;
    this->bDebugLogEnableWanted = false;
    this->bDebugLogEnableCriminalPlayer = false;
    this->bShowDebugWantedSpawnerSphere = false;
    this->bTransportGrantedMonsterToPalBox = false;
    this->bInvaderDisable = false;
    this->DebugSpawnWildPal_DistanceFromPlayer = 500.00f;
    this->DebugAddStatus = EPalStatusID::Burn;
    this->bIsDisplayDebug_PassiveSkill = false;
    this->bShowPassiveSkillStatus = false;
    this->ShowPassiveSkillStatusRange = 2000.00f;
    this->bIgnorePalPassiveSkill = false;
    this->bGrantPassiveSkillAlways = false;
    this->bPassiveSkill_CollectItem_10Sec = false;
    this->bPassiveSkill_LifeSteal_DisplayRecoverHp = false;
    this->bLogMapObjectFailedSpawn = false;
    this->bShowMapObjectStatus = false;
    this->bShowMapObjectFoliageStatus = false;
    this->ShowMapObjectStatusRange = 1000.00f;
    this->bDisablePalFoliageComponentBeginPlay = false;
    this->bShowMapObjectSpawnerStatus = false;
    this->bDisableMapObjectEffect = false;
    this->bDrawDetectMapObjectInDoor = false;
    this->bCanDamageToMapObjectFromSameGroup = false;
    this->MapObjectHpOverride = -1;
    this->FoliageRespawnIntervalOverrideSeconds = -1.00f;
    this->bVisibleFoliageChunk = false;
    this->bShowPalEggStatus = false;
    this->ShowPalEggStatusRange = 1000.00f;
    this->bIsHideAllHUD = false;
    this->bIsNowHUDHide = false;
    this->bForceCreateDispatchParameterByHUDService = false;
    this->bShowDebugMapIcon = false;
    this->bIsHideUIForPV = false;
    this->bIsCompletePaldex = false;
    this->bUseFixedPositionPlayerUI = true;
    this->bForceShowHPGauge = false;
    this->bIsFixedRandomSeed = false;
    this->actionRandomSeed = 1192;
    this->bAvailableBuildObjectInDevelop = false;
    this->bShowBuildObjectInstallCheck = false;
    this->bDrawDebugInstallConnection = false;
    this->bUseEagleForGlider = false;
    this->bEquipDefaultGlider = true;
    this->ExtraHpRegenRateInSleepingBed = 1.00f;
    this->bForceDisableLamp = false;
    this->bForceDisableTimerLight = false;
    this->bForceDisableTickOptimization = false;
    this->bForceDisableDamagePopup = false;
    this->bIsShowTickOptimizationType = false;
    this->bIgnoreFastTravelLock = false;
    this->bIsShowPostAkEvent = false;
    this->SoundDebugModelClass = NULL;
    this->bIsMuteForPlayerSoundOnly = false;
    this->bDisplayPlaySoundId = false;
    this->bPlayFootStepSound = true;
    this->bIsSpawnFootStepEffect = true;
    this->bIsDisableCameraPitchLimit = false;
    this->bIsIgnoreNetworkVersionCompatible = false;
    this->bIsUseClientOtomoSetting = false;
    this->bIsForcedSynchronizedMapObject = false;
    this->bEnableCharacterCountInServer = false;
    this->bUseDedicatedServerOptimizeInListenServer = false;
    this->bIsDisableInitRandomCharacterMake = true;
    this->bForceSpawnTreasureBox = false;
    this->bForceSpawnEnemyCamp = false;
    this->bForceSpawnPalEgg = false;
    this->bForceSpawnRarePal = false;
    this->IgnoreAudio = false;
    this->bIsShowAudioSoundPlayer = false;
    this->bForceSpawnRandomIncident = false;
    this->bForceDisableSpawnRandomIncident = false;
    this->bShowRandomIncidentSpawnArea = false;
    this->bShowRandomIncidentEndArea = false;
    this->bShowRandomIncidentExcludeArea = false;
    this->bInvadeSetting_Override = false;
    this->InvadeProbability_Override = 0.10f;
    this->InvadeOccurablePlayerLevel_Override = 0;
    this->Biome_Override = EPalBiomeType::Undefined;
    this->InvadeJudgmentInterval_Minutes_Override = 1;
    this->InvadeCollTime_Max_Minutes_Override = 30;
    this->InvadeCollTime_Min_Minutes_Override = 10;
    this->InvadeReturnTime_Minutes_Override = 4;
    this->InvadeStartPoint_BaseCampRadius_Min_cm_Override = 20000;
    this->InvadeStartPoint_BaseCampRadius_Max_cm_Override = 40000;
    this->VisitorNPCProbability_Override = 0.10f;
    this->VisitorNPCReturnTime_Minutes_Override = 20;
    this->bIsDisableCrossKeyQuickSwitch = true;
    this->bIsEnableAirRolling = false;
    this->bIsEnablePalWarp = false;
    this->bDungeonDevelopFlag = false;
    this->bIsDisableOptionWorldLoadConfig = false;
    this->bIsShowNightSkipLog = false;
    this->bIsApplyOptionWorldModePreset = true;
    this->bShowAnimRateScale = false;
    this->ShowAnimRateScaleRange = 2000.00f;
    this->bIsParallelForUpdateActiveTiles = true;
    this->bIsDisablePlayerTeleportTimeout = false;
    this->bUseMalePlayer = false;
    this->bEnableLoadingScreen = true;
    this->bIsSkipCharacterMake = false;
    this->bDrawHitCollision = false;
    this->bDisableGrapplingCoolDown = false;
    this->bDrawGrapplingLine = false;
    this->bDrawGrapplingHitPoint = false;
    this->bDrawAmbientSoundLinePlayLocation = false;
    this->bDrawAmbientSoundActivateTrigger = false;
    this->bDrawDefenseAttackableRange = false;
    this->bShowDefenseAttackTarget = false;
    this->ShowDefenseRange = 2000.00f;
    this->WorldPartitionLoadCheckRange = -1.00f;
    this->WorldPartitionLoadActivatedCheck = false;
    this->bDisableInteractRecicleTarget = false;
    this->bShowStageDeathPenaltyLocation = false;
    this->bForceLocationTeleport = false;
    this->bShowInvaderDeubgLog = false;
}


