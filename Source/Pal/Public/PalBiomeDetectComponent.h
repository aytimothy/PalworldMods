#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalBiomeDetectComponent.generated.h"

class AActor;
class APalBiomeAreaTriggerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBiomeDetectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangedBiomeDelegate, AActor*, OverlapActor, APalBiomeAreaTriggerBase*, BiomeTriggerActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedBiomeDelegate OnChangedBiome;
    
    UPalBiomeDetectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ChangeBiome(APalBiomeAreaTriggerBase* BiomeTriggerActor);
    
};

