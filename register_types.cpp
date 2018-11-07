#include "register_types.h"

#include "visual_brain_tree_behavior_tree.h"
#include "plugins/visual_brain_tree_behavior_tree_editor_plugin.h"
#include "brain_tree_behavior_tree.h"

void register_brain_tree_types() {

    ClassDB::register_class<BrainTreeBehaviorTree>();
	ClassDB::register_class<VisualBrainTreeBehaviorTree>();

    //// Component
	ClassDB::register_class<VisualBrainTreeBehaviorTreeNodeComponent>();

    //// Nodes
    //ClassDB::register_class<VisualAnlNoiseNodeScalar>();
    //ClassDB::register_class<VisualAnlNoiseNodeScalarOp>();

    //ClassDB::register_class<VisualAnlNoiseNodeSimplexBasis>();
    //ClassDB::register_class<VisualAnlNoiseNodeExpression>();

#ifdef TOOLS_ENABLED
	EditorPlugins::add_by_type<VisualBrainTreeBehaviorTreeEditorPlugin>();
#endif
}

void unregister_brain_tree_types() {

    // nothing to do here
}