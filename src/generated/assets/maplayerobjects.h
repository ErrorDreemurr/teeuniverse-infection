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

#ifndef __CLIENT_ASSETS_MAPLAYEROBJECTS__
#define __CLIENT_ASSETS_MAPLAYEROBJECTS__

#include <shared/assets/asset.h>
#include <shared/tl/array.h>
#include <shared/assets/assetpath.h>

class CAsset_MapLayerObjects : public CAsset
{
public:
	enum
	{
		SMOOTHNESS_NONE = 0,
		SMOOTHNESS_AUTOMATIC,
	};
	
	static const int TypeId = 27;
	
	enum
	{
		TYPE_OBJECT_VERTEX,
		TYPE_OBJECT,
	};
	
	static inline CSubPath SubPath_ObjectVertex(int Id0, int Id1) { return CSubPath(TYPE_OBJECT_VERTEX, Id0, Id1, 0); }
	static inline CSubPath SubPath_Object(int Id0) { return CSubPath(TYPE_OBJECT, Id0, 0, 0); }
	
	enum
	{
		NAME = CAsset::NAME,
		PARENTPATH,
		OBJECT_ARRAYSIZE,
		OBJECT_PTR,
		OBJECT_ARRAY,
		OBJECT_POSITION,
		OBJECT_POSITION_X,
		OBJECT_POSITION_Y,
		OBJECT_SIZE,
		OBJECT_SIZE_X,
		OBJECT_SIZE_Y,
		OBJECT_ANGLE,
		OBJECT_STYLEPATH,
		OBJECT_VERTEX_ARRAYSIZE,
		OBJECT_VERTEX_PTR,
		OBJECT_VERTEX_ARRAY,
		OBJECT_VERTEX,
		OBJECT_VERTEX_POSITION,
		OBJECT_VERTEX_POSITION_X,
		OBJECT_VERTEX_POSITION_Y,
		OBJECT_VERTEX_WEIGHT,
		OBJECT_VERTEX_COLOR,
		OBJECT_VERTEX_SMOOTHNESS,
		OBJECT_CLOSEDPATH,
		OBJECT,
		VISIBILITY,
	};
	
	class CIteratorObject
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorObject() : m_Index(0), m_Reverse(false) {}
		CIteratorObject(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorObject& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_Object(m_Index); }
		bool operator==(const CIteratorObject& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorObject& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorObject BeginObject() const { return CIteratorObject(0, false); }
	CIteratorObject EndObject() const { return CIteratorObject(m_Object.size(), false); }
	CIteratorObject ReverseBeginObject() const { return CIteratorObject(m_Object.size()-1, true); }
	CIteratorObject ReverseEndObject() const { return CIteratorObject(-1, true); }
	
	class CVertex
	{
	public:
		class CTuaType
		{
		public:
			CTuaVec2 m_Position;
			tua_float m_Weight;
			tua_uint32 m_Color;
			tua_int32 m_Smoothness;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapLayerObjects::CVertex& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerObjects::CVertex& SysType, CTuaType& TuaType);
		};
		
	
	private:
		vec2 m_Position;
		float m_Weight;
		vec4 m_Color;
		int m_Smoothness;
	
	public:
		CVertex();
		void copy(const CAsset_MapLayerObjects::CVertex& Item)
		{
			m_Position = Item.m_Position;
			m_Weight = Item.m_Weight;
			m_Color = Item.m_Color;
			m_Smoothness = Item.m_Smoothness;
		}
		
		void transfert(CAsset_MapLayerObjects::CVertex& Item)
		{
			m_Position = Item.m_Position;
			m_Weight = Item.m_Weight;
			m_Color = Item.m_Color;
			m_Smoothness = Item.m_Smoothness;
		}
		
		inline vec2 GetPosition() const { return m_Position; }
		
		inline float GetPositionX() const { return m_Position.x; }
		
		inline float GetPositionY() const { return m_Position.y; }
		
		inline float GetWeight() const { return m_Weight; }
		
		inline vec4 GetColor() const { return m_Color; }
		
		inline int GetSmoothness() const { return m_Smoothness; }
		
		inline void SetPosition(vec2 Value) { m_Position = Value; }
		
		inline void SetPositionX(float Value) { m_Position.x = Value; }
		
		inline void SetPositionY(float Value) { m_Position.y = Value; }
		
		inline void SetWeight(float Value) { m_Weight = Value; }
		
		inline void SetColor(vec4 Value) { m_Color = Value; }
		
		inline void SetSmoothness(int Value) { m_Smoothness = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
		}
		
	};
	class CObject
	{
	public:
		class CTuaType
		{
		public:
			CTuaVec2 m_Position;
			CTuaVec2 m_Size;
			tua_float m_Angle;
			CAssetPath::CTuaType m_StylePath;
			CTuaArray m_Vertex;
			tua_uint8 m_ClosedPath;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapLayerObjects::CObject& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerObjects::CObject& SysType, CTuaType& TuaType);
		};
		
	
	private:
		vec2 m_Position;
		vec2 m_Size;
		float m_Angle;
		CAssetPath m_StylePath;
		array< CVertex, allocator_copy<CVertex> > m_Vertex;
		bool m_ClosedPath;
	
	public:
		CObject();
		void copy(const CAsset_MapLayerObjects::CObject& Item)
		{
			m_Position = Item.m_Position;
			m_Size = Item.m_Size;
			m_Angle = Item.m_Angle;
			m_StylePath = Item.m_StylePath;
			m_Vertex.copy(Item.m_Vertex);
			m_ClosedPath = Item.m_ClosedPath;
		}
		
		void transfert(CAsset_MapLayerObjects::CObject& Item)
		{
			m_Position = Item.m_Position;
			m_Size = Item.m_Size;
			m_Angle = Item.m_Angle;
			m_StylePath = Item.m_StylePath;
			m_Vertex.transfert(Item.m_Vertex);
			m_ClosedPath = Item.m_ClosedPath;
		}
		
		inline vec2 GetPosition() const { return m_Position; }
		
		inline float GetPositionX() const { return m_Position.x; }
		
		inline float GetPositionY() const { return m_Position.y; }
		
		inline vec2 GetSize() const { return m_Size; }
		
		inline float GetSizeX() const { return m_Size.x; }
		
		inline float GetSizeY() const { return m_Size.y; }
		
		inline float GetAngle() const { return m_Angle; }
		
		inline CAssetPath GetStylePath() const { return m_StylePath; }
		
		inline int GetVertexArraySize() const { return m_Vertex.size(); }
		
		inline const CAsset_MapLayerObjects::CVertex* GetVertexPtr() const { return m_Vertex.base_ptr(); }
		
		inline const array< CVertex, allocator_copy<CVertex> >& GetVertexArray() const { return m_Vertex; }
		inline array< CVertex, allocator_copy<CVertex> >& GetVertexArray() { return m_Vertex; }
		
		inline const CAsset_MapLayerObjects::CVertex& GetVertex(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				return m_Vertex[SubPath.GetId()];
			else
				dbg_msg("Asset", "Try to access to an inexistant subitem");
		}
		
		inline vec2 GetVertexPosition(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				return m_Vertex[SubPath.GetId()].GetPosition();
			else return 0.0f;
		}
		
		inline float GetVertexPositionX(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				return m_Vertex[SubPath.GetId()].GetPositionX();
			else return 0.0f;
		}
		
		inline float GetVertexPositionY(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				return m_Vertex[SubPath.GetId()].GetPositionY();
			else return 0.0f;
		}
		
		inline float GetVertexWeight(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				return m_Vertex[SubPath.GetId()].GetWeight();
			else return 0.0f;
		}
		
		inline vec4 GetVertexColor(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				return m_Vertex[SubPath.GetId()].GetColor();
			else return 1.0f;
		}
		
		inline int GetVertexSmoothness(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				return m_Vertex[SubPath.GetId()].GetSmoothness();
			else return 0;
		}
		
		inline bool GetClosedPath() const { return m_ClosedPath; }
		
		inline void SetPosition(vec2 Value) { m_Position = Value; }
		
		inline void SetPositionX(float Value) { m_Position.x = Value; }
		
		inline void SetPositionY(float Value) { m_Position.y = Value; }
		
		inline void SetSize(vec2 Value) { m_Size = Value; }
		
		inline void SetSizeX(float Value) { m_Size.x = Value; }
		
		inline void SetSizeY(float Value) { m_Size.y = Value; }
		
		inline void SetAngle(float Value) { m_Angle = Value; }
		
		inline void SetStylePath(const CAssetPath& Value) { m_StylePath = Value; }
		
		inline void SetVertexArraySize(int Value) { m_Vertex.resize(Value); }
		
		inline void SetVertex(const CSubPath& SubPath, const CAsset_MapLayerObjects::CVertex& Value)
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
			{
				m_Vertex[SubPath.GetId()].copy(Value);
			}
		}
		
		inline void SetVertexPosition(const CSubPath& SubPath, vec2 Value)
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				m_Vertex[SubPath.GetId()].SetPosition(Value);
		}
		
		inline void SetVertexPositionX(const CSubPath& SubPath, float Value)
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				m_Vertex[SubPath.GetId()].SetPositionX(Value);
		}
		
		inline void SetVertexPositionY(const CSubPath& SubPath, float Value)
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				m_Vertex[SubPath.GetId()].SetPositionY(Value);
		}
		
		inline void SetVertexWeight(const CSubPath& SubPath, float Value)
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				m_Vertex[SubPath.GetId()].SetWeight(Value);
		}
		
		inline void SetVertexColor(const CSubPath& SubPath, vec4 Value)
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				m_Vertex[SubPath.GetId()].SetColor(Value);
		}
		
		inline void SetVertexSmoothness(const CSubPath& SubPath, int Value)
		{
			if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size())
				m_Vertex[SubPath.GetId()].SetSmoothness(Value);
		}
		
		inline void SetClosedPath(bool Value) { m_ClosedPath = Value; }
		
		inline int AddVertex()
		{
			int Id = m_Vertex.size();
			m_Vertex.increment();
			return Id;
		}
		
		inline int DeleteVertex(const CSubPath& SubPath) { m_Vertex.remove_index(SubPath.GetId()); }
		
		inline bool IsValidVertex(const CSubPath& SubPath) const { return (SubPath.GetId() >= 0 && SubPath.GetId() < m_Vertex.size()); }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
			Operation.Apply(m_StylePath);
			for(int i=0; i<m_Vertex.size(); i++)
			{
				m_Vertex[i].AssetPathOperation(Operation);
			}
		}
		
	};
	class CTuaType : public CAsset::CTuaType
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CTuaArray m_Object;
		tua_uint8 m_Visibility;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapLayerObjects& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerObjects& SysType, CTuaType& TuaType);
	};
	

private:
	CAssetPath m_ParentPath;
	array< CAsset_MapLayerObjects::CObject, allocator_copy<CAsset_MapLayerObjects::CObject> > m_Object;
	bool m_Visibility;

public:
	template<typename T>
	T GetValue(int ValueType, const CSubPath& SubPath, T DefaultValue) const
	{
		return CAsset::GetValue<T>(ValueType, SubPath, DefaultValue);
	}
	
	template<typename T>
	bool SetValue(int ValueType, const CSubPath& SubPath, T Value)
	{
		return CAsset::SetValue<T>(ValueType, SubPath, Value);
	}
	
	int AddSubItem(int Type, const CSubPath& SubPath);
	
	int DeleteSubItem(const CSubPath& SubPath);
	
	CAsset_MapLayerObjects();
	void copy(const CAsset_MapLayerObjects& Item)
	{
		CAsset::copy(Item);
		m_ParentPath = Item.m_ParentPath;
		m_Object.copy(Item.m_Object);
		m_Visibility = Item.m_Visibility;
	}
	
	void transfert(CAsset_MapLayerObjects& Item)
	{
		CAsset::transfert(Item);
		m_ParentPath = Item.m_ParentPath;
		m_Object.transfert(Item.m_Object);
		m_Visibility = Item.m_Visibility;
	}
	
	inline CAssetPath GetParentPath() const { return m_ParentPath; }
	
	inline int GetObjectArraySize() const { return m_Object.size(); }
	
	inline const CAsset_MapLayerObjects::CObject* GetObjectPtr() const { return m_Object.base_ptr(); }
	
	inline const array< CAsset_MapLayerObjects::CObject, allocator_copy<CAsset_MapLayerObjects::CObject> >& GetObjectArray() const { return m_Object; }
	inline array< CAsset_MapLayerObjects::CObject, allocator_copy<CAsset_MapLayerObjects::CObject> >& GetObjectArray() { return m_Object; }
	
	inline const CAsset_MapLayerObjects::CObject& GetObject(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()];
		else
			dbg_msg("Asset", "Try to access to an inexistant subitem");
	}
	
	inline vec2 GetObjectPosition(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetPosition();
		else return 0.0f;
	}
	
	inline float GetObjectPositionX(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetPositionX();
		else return 0.0f;
	}
	
	inline float GetObjectPositionY(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetPositionY();
		else return 0.0f;
	}
	
	inline vec2 GetObjectSize(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetSize();
		else return 0.0f;
	}
	
	inline float GetObjectSizeX(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetSizeX();
		else return 0.0f;
	}
	
	inline float GetObjectSizeY(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetSizeY();
		else return 0.0f;
	}
	
	inline float GetObjectAngle(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetAngle();
		else return 0.0f;
	}
	
	inline CAssetPath GetObjectStylePath(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetStylePath();
		else return CAssetPath::Null();
	}
	
	inline int GetObjectVertexArraySize(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexArraySize();
		else return 0;
	}
	
	inline const CAsset_MapLayerObjects::CVertex* GetObjectVertexPtr(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexPtr();
		else return NULL;
	}
	
	inline const array< CVertex, allocator_copy<CVertex> >& GetObjectVertexArray(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexArray();
	}
	inline array< CVertex, allocator_copy<CVertex> >& GetObjectVertexArray(const CSubPath& SubPath)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexArray();
	}
	
	inline const CAsset_MapLayerObjects::CVertex& GetObjectVertex(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertex(SubPath.PopId());
	}
	
	inline vec2 GetObjectVertexPosition(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexPosition(SubPath.PopId());
		else return 0.0f;
	}
	
	inline float GetObjectVertexPositionX(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexPositionX(SubPath.PopId());
		else return 0.0f;
	}
	
	inline float GetObjectVertexPositionY(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexPositionY(SubPath.PopId());
		else return 0.0f;
	}
	
	inline float GetObjectVertexWeight(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexWeight(SubPath.PopId());
		else return 0.0f;
	}
	
	inline vec4 GetObjectVertexColor(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexColor(SubPath.PopId());
		else return 1.0f;
	}
	
	inline int GetObjectVertexSmoothness(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetVertexSmoothness(SubPath.PopId());
		else return 0;
	}
	
	inline bool GetObjectClosedPath(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			return m_Object[SubPath.GetId()].GetClosedPath();
		else return false;
	}
	
	inline bool GetVisibility() const { return m_Visibility; }
	
	inline void SetParentPath(const CAssetPath& Value) { m_ParentPath = Value; }
	
	inline void SetObjectArraySize(int Value) { m_Object.resize(Value); }
	
	inline void SetObject(const CSubPath& SubPath, const CAsset_MapLayerObjects::CObject& Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
		{
			m_Object[SubPath.GetId()].copy(Value);
		}
	}
	
	inline void SetObjectPosition(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetPosition(Value);
	}
	
	inline void SetObjectPositionX(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetPositionX(Value);
	}
	
	inline void SetObjectPositionY(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetPositionY(Value);
	}
	
	inline void SetObjectSize(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetSize(Value);
	}
	
	inline void SetObjectSizeX(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetSizeX(Value);
	}
	
	inline void SetObjectSizeY(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetSizeY(Value);
	}
	
	inline void SetObjectAngle(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetAngle(Value);
	}
	
	inline void SetObjectStylePath(const CSubPath& SubPath, const CAssetPath& Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetStylePath(Value);
	}
	
	inline void SetObjectVertexArraySize(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetVertexArraySize(Value);
	}
	
	inline void SetObjectVertex(const CSubPath& SubPath, const CAsset_MapLayerObjects::CVertex& Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetVertex(SubPath.PopId(), Value);
	}
	
	inline void SetObjectVertexPosition(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetVertexPosition(SubPath.PopId(), Value);
	}
	
	inline void SetObjectVertexPositionX(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetVertexPositionX(SubPath.PopId(), Value);
	}
	
	inline void SetObjectVertexPositionY(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetVertexPositionY(SubPath.PopId(), Value);
	}
	
	inline void SetObjectVertexWeight(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetVertexWeight(SubPath.PopId(), Value);
	}
	
	inline void SetObjectVertexColor(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetVertexColor(SubPath.PopId(), Value);
	}
	
	inline void SetObjectVertexSmoothness(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetVertexSmoothness(SubPath.PopId(), Value);
	}
	
	inline void SetObjectClosedPath(const CSubPath& SubPath, bool Value)
	{
		if(SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size())
			m_Object[SubPath.GetId()].SetClosedPath(Value);
	}
	
	inline void SetVisibility(bool Value) { m_Visibility = Value; }
	
	inline int AddObject()
	{
		int Id = m_Object.size();
		m_Object.increment();
		return Id;
	}
	
	inline int AddObjectVertex(const CSubPath& SubPath) { return m_Object[SubPath.GetId()].AddVertex(); }
	
	inline int DeleteObject(const CSubPath& SubPath) { m_Object.remove_index(SubPath.GetId()); }
	
	inline int DeleteObjectVertex(const CSubPath& SubPath) { return m_Object[SubPath.GetId()].DeleteVertex(SubPath.PopId()); }
	
	inline bool IsValidObject(const CSubPath& SubPath) const { return (SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size()); }
	
	inline bool IsValidObjectVertex(const CSubPath& SubPath) const { return (SubPath.GetId() >= 0 && SubPath.GetId() < m_Object.size() && m_Object[SubPath.GetId()].IsValidVertex(SubPath.PopId())); }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		Operation.Apply(m_ParentPath);
		for(int i=0; i<m_Object.size(); i++)
		{
			m_Object[i].AssetPathOperation(Operation);
		}
	}
	
};

template<> int CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const;
template<> bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, int Value);
template<> bool CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const;
template<> bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, bool Value);
template<> float CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const;
template<> bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, float Value);
template<> vec2 CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, vec2 DefaultValue) const;
template<> bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, vec2 Value);
template<> vec4 CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const;
template<> bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value);
template<> CAssetPath CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif
