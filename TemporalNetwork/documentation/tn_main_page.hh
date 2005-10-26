/**
 * @defgroup TemporalNetwork
 * <A NAME="tn_overview"><H3>Temporal Network Overview</H3></A>
 *
 * The temporal network is responsible for efficiently ensuring
 * consistency with temporal constraints.  To use the temporal
 * network, one instantiates a TemporalPropagator, which will
 * register itself with a supplied constraint engine.  One can
 * attach a listener to the temporal network in order to monitor
 * events in the temporal network.  There is also a special
 * purpose temporal advisor defined for simple temporal networks
 * as part of the TemporalNetwork module.
 *
 * <A NAME="tn_history"><H4>Design</H4></A>
 *
 * A substantial amount of the temporal network is code that has
 * been migrated from Europa 1.  This comprises the core of the
 * temporal network, including an implementation of a distance
 * graph, dispatch graph, and the temporal network itself.
 *
 * New code that integrates the temporal network into the new
 * framework is defined in the components of the module.  This
 * includes most of the classes mentioned in the overview.  The
 * components of this module demonstrate how to augment system
 * behavior through inheritance.
 * @li STNTemporalAdvisor from DefaultTemporalAdvisor
 * @li TemporalPropagator from Propagator
 * @li TemporalDistanceConstraint from AddEqualConstraint
 *
 * <A NAME="tn_entry"><H4>API</H4></A>
 *
 * The main class in the temporal network is the 
 * TemporalPropagator.  Instantiating the TemporalPropagator
 * will create a TemporalNetwork.  It will also associate
 * the propagator with the given constraint engine.
 * 
 * The temporal network can be monitored by adding a
 * TemporalNetworkListener to the TemporalPropagator.
 * The temporal network can be queried through four
 * reader functions defined on TemporalPropagator.
 *
 * Other key classes include the TemporalConstraints:
 * @li TemporalDistanceConstraint - (source, distance, destination)
 * @li PrecedesConstraint - (source, destination)
 * @li ConcurrentConstraint - (source, destination)
 * These need to be registered using REGISTER_CONSTRAINT,
 * before usage.
 *
 * <A NAME="tn_use"><H4>Using the Temporal Network API</H4></A>
 *
 * In the TemporalNetwork module tests "testTemporalPropagation"
 * is a good example of how to instantiate and use the
 * TemporalNetwork.
 *
 */