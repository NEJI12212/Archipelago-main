#ifndef TRAINING_H
#define TRAINING_H
    #include "../glover.h"
    //Tip
    void TipInitTraining();
    void TipTraining(u32 ptr, u16 obj_type, u16 item_id);
    void CollectedTipTraining(u32 ptr);
    void VisitedTiphatsTraining();
    void TipTextHintTraining(u32 orig_txt_ptr);
    //Switch
    void SwitchInitTraining();
    void SwitchTraining(u32 ptr, u16 obj_type, u16 item_id);
    void MonitorEventsTraining();
    void HitSwitchTraining();
    void HitBallSwitchTraining(u32 ptr);
#endif
