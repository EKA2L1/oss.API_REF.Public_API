// Copyright (c) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// This component and the accompanying materials are made available
// under the terms of "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
//
// Initial Contributors:
// Nokia Corporation - initial contribution.
//
// Contributors:
//
// Description:
//



/**
 @file
 @publishedAll
 @released
*/

#include <e32base.h>
#include <remconmediabrowsetypes.h>

#ifndef REMCONDATABASEAWARENOWPLAYINGBROWSE_H
#define REMCONDATABASEAWARENOWPLAYINGBROWSE_H

NONSHARABLE_CLASS(MRemConDatabaseAwareNowPlayingBrowse)
	{
public:
	IMPORT_C void MrcdanpbFolderListing(const TArray<TRemConItem>& aFolderListing, 
			TUint16 aMediaLibraryStateCookie, 
			TUint aResult);
			
	IMPORT_C void MrcdanpbMediaElementItemResult(const TRemConItemUid& aMediaID, 
			const TDesC8& aMediaName, 
			TMediaItemType aMediaType, 
			const TArray<TMediaElementAttribute>& aAttributes,
			TInt aResult);
	
private:
	virtual void MrcdanpbDoFolderListing(const TArray<TRemConItem>& aFolderListing, 
			TUint16 aMediaLibraryStateCookie, 
			TUint aResult) = 0;
		
	virtual void MrcdanpbDoMediaElementItemResult(const TRemConItemUid& aMediaID, 
			const TDesC8& aMediaName, 
			TMediaItemType aMediaType, 
			const TArray<TMediaElementAttribute>& aAttributes,
			TInt aResult) = 0;
	};

#endif //REMCONDATABASEAWARENOWPLAYINGBROWSE_H

