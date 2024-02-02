#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameDateTime.h"
#include "PalWorldObjectRecordData_MapObjectSpawnerItem.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldObjectRecordData_MapObjectSpawnerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameDateTime NextSpawnLotteryGameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid MapObjectInstanceId;
    
    PAL_API FPalWorldObjectRecordData_MapObjectSpawnerItem();
};

