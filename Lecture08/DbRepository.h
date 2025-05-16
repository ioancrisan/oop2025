// //
// // Created by IoanCrisan on 16.05.2025.
// //
//
// #ifndef DBREPOSITORY_H
// #define DBREPOSITORY_H
//
//
//
// #include <vector>
// #include <fstream>
// #include <algorithm>
// #include <functional>
//
// #include "Repository.h"
//
// template<typename TItem>
// class DbRepository : public Repository<TItem> {
// public:
//     explicit DbRepository(const std::string& filePath) : filePath(filePath) {
//         LoadFromFile();
//     }
//
//     ~DbRepository() {
//         SaveToFile();
//     }
//
//     std::vector<TItem> Query(const std::function<bool(const TItem&)>& predicate) const override {
//         if (!predicate) {
//             return database;
//         }
//         std::vector<TItem> result;
//         std::copy_if(database.begin(), database.end(), std::back_inserter(result), predicate);
//         return result;
//     }
//
//     void Add(const TItem& item) override {
//         database.push_back(item);
//         SaveToFile();
//     }
//
//     void Remove(const TItem& item) override {
//         database.erase(std::remove(database.begin(), database.end(), item), database.end());
//         SaveToFile();
//     }
//
//     void Update(const TItem& oldItem, const TItem& newItem) override {
//         auto it = std::find(database.begin(), database.end(), oldItem);
//         if (it != database.end()) {
//             *it = newItem;
//             SaveToFile();
//         }
//     }
//
// private:
//     std::vector<TItem> database;
//     std::string filePath;
//
//     void LoadFromFile() {
//         // TODO
//     }
//
//     void SaveToFile() const {
//         // TODO
//     }
// };
//
//
//
// #endif //DBREPOSITORY_H
