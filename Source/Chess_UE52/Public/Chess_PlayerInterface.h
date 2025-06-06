// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Chess_PlayerInterface.generated.h"

enum class EResult : uint8;

UENUM()
enum class ESet : uint8
{
	WHITE,
	BLACK,
	EMPTY
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UChess_PlayerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class CHESS_UE52_API IChess_PlayerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	int32 PlayerNumber;
	ESet Set;

	virtual void OnPawnPromotion() {};
	virtual void OnTurn() {};
	virtual void OnWin() {};
	virtual void OnLose() {};
	virtual void OnDraw(EResult DrawOrigin) {};
}; 


