#pragma once
/******************************************************************
*                                                                 *
* EE_Entity.h - Declares and defines the base component class,    *
*               that extends entity functionality.                *
*                                                                 *
******************************************************************/

#include "EE_Base.h"
#include "EE_Entity.h"

namespace EE 
{
	namespace PIG
	{
		class BaseComponent
		{
		public:
			BaseComponent();
			virtual ~BaseComponent();

			virtual void Bind(Entity * owner);
			virtual void Update(int ticks) = 0;

		protected:
			EE::Entity * owner;
		};
	}
}