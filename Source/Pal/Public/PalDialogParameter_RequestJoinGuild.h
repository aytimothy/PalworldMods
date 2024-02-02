#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDialogParameterDialog.h"
#include "PalInstanceID.h"
#include "PalDialogParameter_RequestJoinGuild.generated.h"

UCLASS(Blueprintable)
class UPalDialogParameter_RequestJoinGuild : public UPalDialogParameterDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RequestPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID RequestPlayerInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid TargetPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID TargetPlayerInstanceId;
    
    UPalDialogParameter_RequestJoinGuild();

};

