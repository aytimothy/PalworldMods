#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalFoliageGridInstanceMap.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageGridModel.generated.h"

class UPalMapObjectFoliageModel;

UCLASS(Blueprintable)
class PAL_API UPalFoliageGridModel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalMapObjectFoliageModel*> FoliageModelMapInServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalFoliageGridInstanceMap> InstanceMapByComponentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FVector, FPalFoliageInstanceId> InstanceIdMapByLocation;
    
public:
    UPalFoliageGridModel();

};

