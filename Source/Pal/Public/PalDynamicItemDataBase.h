#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDynamicItemId.h"
#include "PalDynamicItemDataBase.generated.h"

UCLASS(Blueprintable)
class UPalDynamicItemDataBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalDynamicItemId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName StaticId;
    
public:
    UPalDynamicItemDataBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStaticId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalDynamicItemId GetId() const;
    
};

