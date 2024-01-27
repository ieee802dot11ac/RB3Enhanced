#ifndef _BANDLABEL_H
#define _BANDLABEL_H

#include "SortNode.h"

typedef struct _BandLabel
{
#ifdef RB3E_WII
    char unk[0x1ec];
#else
    char unk[0x24c];
#endif
    int strLength;
    char *string;
} BandLabel;

extern void SetSongAndArtistName(BandLabel *label, SortNode *unk);
extern void SetSongNameFromNode(BandLabel *label, SortNode *unk);
extern void BandLabelSetDisplayText(BandLabel *label, char *text, int unk);
extern int MusicLibraryMat(void *thisMusicLibrary, int unk, int unk2, int *listSlot); // returns the material for UIListMeshes in the music library

#endif // _BANDLABEL_H