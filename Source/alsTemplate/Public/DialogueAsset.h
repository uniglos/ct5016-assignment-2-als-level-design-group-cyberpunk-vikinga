

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogueAsset.generated.h"

/**
 * 
 */
USTRUCT()
struct FDialogueInfo {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    FString CharacterName;

    UPROPERTY(EditAnywhere)
    FString Text;

    UPROPERTY(EditAnywhere)
    UTexture2D* CharacterImage;
};


UCLASS()
class ALSTEMPLATE_API UDialogueAsset : public UDataAsset {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    TArray<FDialogueInfo> AssetItems;
};
