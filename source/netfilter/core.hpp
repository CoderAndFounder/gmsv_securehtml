#ifndef NETFILTER_CORE_HPP
#define NETFILTER_CORE_HPP

#pragma once

namespace GarrysMod::Lua {
class ILuaBase;
} // namespace GarrysMod::Lua

namespace netfilter {
void Initialize(GarrysMod::Lua::ILuaBase *LUA);
void Deinitialize();
void SetFilterOptions(int option); // Новая функция для установки параметров фильтрации
void FilterRequest(const std::string &request); // Фильтрация запросов
void FilterSQLInjection(const std::string &request); // Фильтрация SQL-инъекций
} // namespace netfilter

#endif // NETFILTER_CORE_HPP
