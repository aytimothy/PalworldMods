#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalTestMapObjectRegistrationToManager.generated.h"

UCLASS(Blueprintable)
class APalTestMapObjectRegistrationToManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyVirtualBaseCamp;
    
public:
    APalTestMapObjectRegistrationToManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceBuildComplete();
    
};

