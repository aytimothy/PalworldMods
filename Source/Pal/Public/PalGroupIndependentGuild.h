#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGroupGuildBase.h"
#include "PalGuildPlayerInfo.h"
#include "PalGroupIndependentGuild.generated.h"

UCLASS(Blueprintable)
class UPalGroupIndependentGuild : public UPalGroupGuildBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalGuildPlayerInfo PlayerInfo;
    
public:
    UPalGroupIndependentGuild();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

