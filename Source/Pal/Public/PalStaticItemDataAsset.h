#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalStaticItemDataAsset.generated.h"

class AActor;
class UPalStaticItemDataBase;

UCLASS(Blueprintable)
class PAL_API UPalStaticItemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalStaticItemDataBase*> StaticItemDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> UndefinedVisualBlueprintClassSoft;
    
    UPalStaticItemDataAsset();

};

