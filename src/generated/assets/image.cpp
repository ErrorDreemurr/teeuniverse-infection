/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#include <generated/assets/image.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_Image::CAsset_Image()
{
	m_GridWidth = 1;
	m_GridHeight = 1;
	m_GridSpacing = 0;
	m_TexelSize = 1024;
	m_TilingEnabled = false;
}

void CAsset_Image::CTuaType_0_1_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_Image& SysType)
{
	CAsset::CTuaType_0_1_0::Read(pLoadingContext, TuaType, SysType);

	SysType.m_GridWidth = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_GridWidth);
	SysType.m_GridHeight = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_GridHeight);
	SysType.m_GridSpacing = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_GridSpacing);
	SysType.m_TexelSize = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_TexelSize);
	SysType.m_TilingEnabled = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_TilingEnabled);
	{
		const tua_uint8* pData = (const tua_uint8*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Data.m_Data);
		uint32 Width = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Data.m_Width);
		uint32 Height = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Data.m_Height);
		uint32 Depth = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Data.m_Depth);
		SysType.m_Data.resize(Width, Height, Depth);
		mem_copy((uint8*) SysType.m_Data.base_ptr(), pData, SysType.m_Data.get_linear_size());
	}
	
}


void CAsset_Image::CTuaType_0_1_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Image& SysType, CTuaType_0_1_0& TuaType)
{
	CAsset::CTuaType_0_1_0::Write(pLoadingContext, SysType, TuaType);

	TuaType.m_GridWidth = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_GridWidth);
	TuaType.m_GridHeight = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_GridHeight);
	TuaType.m_GridSpacing = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_GridSpacing);
	TuaType.m_TexelSize = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_TexelSize);
	TuaType.m_TilingEnabled = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_TilingEnabled);
	{
		TuaType.m_Data.m_Width = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Data.get_width());
		TuaType.m_Data.m_Height = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Data.get_height());
		TuaType.m_Data.m_Depth = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Data.get_depth());
		TuaType.m_Data.m_Data = pLoadingContext->ArchiveFile()->AddData((tua_uint8*) SysType.m_Data.base_ptr(), SysType.m_Data.get_linear_size());
	}
}

void CAsset_Image::CTuaType_0_2_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_Image& SysType)
{
	CAsset::CTuaType_0_2_0::Read(pLoadingContext, TuaType, SysType);

	SysType.m_GridWidth = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_GridWidth);
	SysType.m_GridHeight = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_GridHeight);
	SysType.m_GridSpacing = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_GridSpacing);
	SysType.m_TexelSize = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_TexelSize);
	SysType.m_TilingEnabled = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_TilingEnabled);
	{
		const tua_uint8* pData = (const tua_uint8*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Data.m_Data);
		uint32 Width = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Data.m_Width);
		uint32 Height = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Data.m_Height);
		uint32 Depth = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Data.m_Depth);
		SysType.m_Data.resize(Width, Height, Depth);
		mem_copy((uint8*) SysType.m_Data.base_ptr(), pData, SysType.m_Data.get_linear_size());
	}
	
}


void CAsset_Image::CTuaType_0_2_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Image& SysType, CTuaType_0_2_0& TuaType)
{
	CAsset::CTuaType_0_2_0::Write(pLoadingContext, SysType, TuaType);

	TuaType.m_GridWidth = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_GridWidth);
	TuaType.m_GridHeight = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_GridHeight);
	TuaType.m_GridSpacing = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_GridSpacing);
	TuaType.m_TexelSize = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_TexelSize);
	TuaType.m_TilingEnabled = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_TilingEnabled);
	{
		TuaType.m_Data.m_Width = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Data.get_width());
		TuaType.m_Data.m_Height = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Data.get_height());
		TuaType.m_Data.m_Depth = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Data.get_depth());
		TuaType.m_Data.m_Data = pLoadingContext->ArchiveFile()->AddData((tua_uint8*) SysType.m_Data.base_ptr(), SysType.m_Data.get_linear_size());
	}
}

template<>
int CAsset_Image::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case GRIDWIDTH:
			return GetGridWidth();
		case GRIDHEIGHT:
			return GetGridHeight();
		case GRIDSPACING:
			return GetGridSpacing();
		case TEXELSIZE:
			return GetTexelSize();
		case DATA_WIDTH:
			return GetDataWidth();
		case DATA_HEIGHT:
			return GetDataHeight();
		case DATA:
			return GetData(SubPath);
		case TEXTURE_ID:
			return GetTextureId();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Image::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case GRIDWIDTH:
			SetGridWidth(Value);
			return true;
		case GRIDHEIGHT:
			SetGridHeight(Value);
			return true;
		case GRIDSPACING:
			SetGridSpacing(Value);
			return true;
		case TEXELSIZE:
			SetTexelSize(Value);
			return true;
		case DATA_WIDTH:
			SetDataWidth(Value);
			return true;
		case DATA_HEIGHT:
			SetDataHeight(Value);
			return true;
		case DATA:
			SetData(SubPath, Value);
			return true;
		case TEXTURE_ID:
			SetTextureId(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
bool CAsset_Image::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const
{
	switch(ValueType)
	{
		case TILINGENABLED:
			return GetTilingEnabled();
	}
	return CAsset::GetValue<bool>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Image::SetValue(int ValueType, const CSubPath& SubPath, bool Value)
{
	switch(ValueType)
	{
		case TILINGENABLED:
			SetTilingEnabled(Value);
			return true;
	}
	return CAsset::SetValue<bool>(ValueType, SubPath, Value);
}

int CAsset_Image::AddSubItem(int Type, const CSubPath& SubPath)
{
	return -1;
}

int CAsset_Image::AddSubItemAt(int Type, const CSubPath& SubPath, int Index)
{
	return -1;
}

void CAsset_Image::DeleteSubItem(const CSubPath& SubPath)
{
}

void CAsset_Image::RelMoveSubItem(const CSubPath& SubPath, int RelMove)
{
}


