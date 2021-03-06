// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PACKETASSIGNID_PACKETS_H_
#define FLATBUFFERS_GENERATED_PACKETASSIGNID_PACKETS_H_

#include "flatbuffers/flatbuffers.h"

namespace packets {

struct PacketAssignID;

struct PacketAssignID FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  uint32_t id() const { return GetField<uint32_t>(VT_ID, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct PacketAssignIDBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) { fbb_.AddElement<uint32_t>(PacketAssignID::VT_ID, id, 0); }
  PacketAssignIDBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PacketAssignIDBuilder &operator=(const PacketAssignIDBuilder &);
  flatbuffers::Offset<PacketAssignID> Finish() {
    auto o = flatbuffers::Offset<PacketAssignID>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<PacketAssignID> CreatePacketAssignID(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t id = 0) {
  PacketAssignIDBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

inline const packets::PacketAssignID *GetPacketAssignID(const void *buf) { return flatbuffers::GetRoot<packets::PacketAssignID>(buf); }

inline bool VerifyPacketAssignIDBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<packets::PacketAssignID>(); }

inline void FinishPacketAssignIDBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<packets::PacketAssignID> root) { fbb.Finish(root); }

}  // namespace packets

#endif  // FLATBUFFERS_GENERATED_PACKETASSIGNID_PACKETS_H_
